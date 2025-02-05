// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "InputAction.h"
#include "InputMappingContext.h"
#include "EnhancedInputComponent.h"
#include "Materials/MaterialInstance.h"
#include "Net/UnrealNetwork.h"
#include "Engine/Engine.h"
#include "MyCaracter.generated.h"

UCLASS()
class MULTIFLINGUEUR_API AMyCaracter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyCaracter();

	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Visuals")
	UStaticMeshComponent* ReplicationIndicatorMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CACA")
	UMaterialInstance* ClientMaterial;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CACA")
	UMaterialInstance* ServerMaterial;

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
	UInputAction* JumpAction;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY (EditDefaultsOnly, Category = "Health")
	float maxHealth;

	UPROPERTY(ReplicatedUsing = OnRep_CurrentHealth)
	float currentHealth;

	UFUNCTION()
	void OnRep_CurrentHealth();

	void OnHealthUpdate();

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void MoveForward(float value);
	void MoveRight(float value);
	void LookUp(float value);
	void Turn(float value);

	/** Getter for Max Health.*/
	UFUNCTION(BlueprintPure, Category = "Health")
	FORCEINLINE float GetMaxHealth() const { return maxHealth; }

	/** Getter for Current Health.*/
	UFUNCTION(BlueprintPure, Category = "Health")
	FORCEINLINE float GetCurrentHealth() const { return currentHealth; }

	/** Setter for Current Health. Clamps the value between 0 and MaxHealth and calls OnHealthUpdate. Should only be called on the server.*/
	UFUNCTION(BlueprintCallable, Category = "Health")
	void SetCurrentHealth(float healthValue);

	/** Event for taking damage. Overridden from APawn.*/
	UFUNCTION(BlueprintCallable, Category = "Health")
	float TakeDamage(float DamageTaken, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;
};

