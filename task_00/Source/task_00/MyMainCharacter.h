// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Kismet/GameplayStatics.h"
#include "MyMainMatineeCameraShake.h"
#include "Camera/CameraComponent.h"

#include "MyMainCharacter.generated.h"

UCLASS()
class TASK_00_API AMyMainCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMyMainCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(BlueprintReadOnly)
		UCharacterMovementComponent* movement;

	UPROPERTY(EditAnywhere)
		TSubclassOf<UMyMainMatineeCameraShake> myShake;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Camera")
		UCameraComponent* myCamera;

	UFUNCTION(BlueprintCallable, Category = "Player Movement")
		void OnStraightMove(float value);

	UFUNCTION(BlueprintCallable, Category = "Player Movement")
		void OnSideMove(float value);

	UFUNCTION(BlueprintCallable, Category = "Player Movement")
		void OnCameraTurned(float value);

	UFUNCTION(BlueprintCallable, Category = "Player Movement")
		void OnCameraLookedUp(float value);

	UFUNCTION(BlueprintCallable, Category = "Player Movement")
		void OnSprintActivted();

	UFUNCTION(BlueprintCallable, Category = "Player Movement")
		void OnSprintDeactivted();

	UFUNCTION(BlueprintCallable, Category = "Player Movement")
		void OnCrouchActivted();

	UFUNCTION(BlueprintCallable, Category = "Player Movement")
		void OnCrouchDeactivted();

protected: 

	float originalSpeed;
	float maxSpeed;
	float minSpeed;

	const float CAMERA_SHAKE_VALUE = 10.0f;
	float originalCameraFieldOfView = 0;
};
