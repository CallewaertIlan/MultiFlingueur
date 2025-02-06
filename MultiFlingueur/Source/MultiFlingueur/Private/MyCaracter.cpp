// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCaracter.h"

// Sets default values
AMyCaracter::AMyCaracter()
{
	bReplicates = true;

	ReplicationIndicatorMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ReplicationIndicatorMesh"));
	ReplicationIndicatorMesh->SetupAttachment(RootComponent);  // Attach it to the root component (e.g., capsule)
	ReplicationIndicatorMesh->SetRelativeLocation(FVector(0.f, 0.f, 100.f)); // Position it above the character
	ReplicationIndicatorMesh->SetVisibility(true);  // Make it visible in both client and server

	// Optionally set the mesh to be a sphere (replace with another mesh if you want)
	static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereMesh(TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'"));
	if (SphereMesh.Succeeded())
	{
		ReplicationIndicatorMesh->SetStaticMesh(SphereMesh.Object);
		ReplicationIndicatorMesh->SetWorldScale3D(FVector(0.5f)); // Scale it to a reasonable size
	}
	maxHealth = 100.0f;
	currentHealth = maxHealth;

	//Initialize projectile class
	ProjectileClass = AMyProjectile::StaticClass();
	//Initialize fire rate
	FireRate = 0.25f;
	bIsFiringWeapon = false;
}

void AMyCaracter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// Replicate current health
	DOREPLIFETIME(AMyCaracter, currentHealth);
}

// Called when the game starts or when spawned
void AMyCaracter::BeginPlay()
{
	Super::BeginPlay();

		if (IsLocallyControlled())
		{
			// Set material based on local control (each player sees their own material)
			ReplicationIndicatorMesh->SetMaterial(0, ClientMaterial);
		}
		else
		{
			// The server applies the server material, but only to itself
			ReplicationIndicatorMesh->SetMaterial(0, ServerMaterial);
		}
}

void AMyCaracter::OnRep_CurrentHealth()
{
	OnHealthUpdate();
}

void AMyCaracter::OnHealthUpdate()
{
	if (IsLocallyControlled()) {
		FString healthMessage = FString::Printf(TEXT("You now have % f  health remaining."), currentHealth);
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, healthMessage);

		if (currentHealth <= 0)
		{
			FString deathMessage = FString::Printf(TEXT("You have been killed."));
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, deathMessage);
		}
	}
}

// Called every frame
void AMyCaracter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyCaracter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("MoveForward", this, &AMyCaracter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AMyCaracter::MoveRight);
	PlayerInputComponent->BindAxis("LookUp", this, &AMyCaracter::LookUp);
	PlayerInputComponent->BindAxis("Turn", this, &AMyCaracter::Turn);
	// Handle firing projectiles
	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &AMyCaracter::StartFire);

	// Jumping
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);
	}

}

void AMyCaracter::MoveForward(float value)
{
	if (Controller && value != 0.0f)
	{
		const FVector direcion = GetActorForwardVector();
		AddMovementInput(direcion, value);
	}
}

void AMyCaracter::MoveRight(float value)
{
	if (Controller && value != 0.0f)
	{
		const FVector direcion = GetActorRightVector();
		AddMovementInput(direcion, value);
	}
}

void AMyCaracter::Turn(float value)
{
	AddControllerYawInput(value);
}

void AMyCaracter::SetCurrentHealth(float healthValue)
{
	if (GetLocalRole() == ROLE_Authority)
	{
		currentHealth = FMath::Clamp(healthValue, 0.f, maxHealth);
		OnHealthUpdate();
	}
}

float AMyCaracter::TakeDamage(float DamageTaken, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	float damageApplied = currentHealth - DamageTaken;
	SetCurrentHealth(damageApplied);
	return damageApplied;
}

void AMyCaracter::LookUp(float value)
{
	AddControllerPitchInput(value);
}
void AMyCaracter::StartFire()
{
	if (!bIsFiringWeapon)
	{
		bIsFiringWeapon = true;
		UWorld* World = GetWorld();
		World->GetTimerManager().SetTimer(FiringTimer, this, &AMyCaracter::StopFire, FireRate, false);
		HandleFire();
	}
}

void AMyCaracter::StopFire()
{
	bIsFiringWeapon = false;
}

void AMyCaracter::HandleFire_Implementation()
{
	FVector spawnLocation = GetActorLocation() + (GetActorRotation().Vector() * 100.0f) + (GetActorUpVector() * 50.0f);
	FRotator spawnRotation = GetActorRotation();

	FActorSpawnParameters spawnParameters;
	spawnParameters.Instigator = GetInstigator();
	spawnParameters.Owner = this;

	AMyProjectile* spawnedProjectile = GetWorld()->SpawnActor<AMyProjectile>(spawnLocation, spawnRotation, spawnParameters);
}