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
}

// Called when the game starts or when spawned
void AMyCaracter::BeginPlay()
{
	Super::BeginPlay();
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

void AMyCaracter::LookUp(float value)
{
	AddControllerPitchInput(value);
}