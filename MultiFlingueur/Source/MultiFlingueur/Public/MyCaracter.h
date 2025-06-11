#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "MyProjectile.h" // Ensure this file exists and is properly included
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
    AMyCaracter();

    void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Visuals")
    UStaticMeshComponent* ReplicationIndicatorMesh;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CACA")
    UMaterialInstance* ClientMaterial;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "CACA")
    UMaterialInstance* ServerMaterial;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = Input, meta = (AllowPrivateAccess = "true"))
    UInputAction* JumpAction;

protected:
    virtual void BeginPlay() override;

    UPROPERTY(EditDefaultsOnly, Category = "Health")
    float maxHealth;

    UPROPERTY(ReplicatedUsing = OnRep_CurrentHealth)
    float currentHealth;

    UFUNCTION()
    void OnRep_CurrentHealth();

    void OnHealthUpdate();

    UPROPERTY(EditDefaultsOnly, Category = "Gameplay|Projectile")
    TSubclassOf<class AMyProjectile> ProjectileClass;

    UPROPERTY(EditDefaultsOnly, Category = "Gameplay")
    float FireRate;

    bool bIsFiringWeapon;

    UFUNCTION(BlueprintCallable, Category = "Gameplay")
    void StartFire();

    UFUNCTION(BlueprintCallable, Category = "Gameplay")
    void StopFire();

    UFUNCTION(Server, Reliable)
    void HandleFire();

    FTimerHandle FiringTimer;

public:
    virtual void Tick(float DeltaTime) override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

    void MoveForward(float value);
    void MoveRight(float value);
    void LookUp(float value);
    void Turn(float value);

    UFUNCTION(BlueprintPure, Category = "Health")
    FORCEINLINE float GetMaxHealth() const { return maxHealth; }

    UFUNCTION(BlueprintPure, Category = "Health")
    FORCEINLINE float GetCurrentHealth() const { return currentHealth; }

    UFUNCTION(BlueprintCallable, Category = "Health")
    void SetCurrentHealth(float healthValue);

    UFUNCTION(BlueprintCallable, Category = "Health")
    float TakeDamage(float DamageTaken, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;
};
