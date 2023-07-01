// Fill out your copyright notice in the Description page of Project Settings.


#include "MyMainCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/PlayerCameraManager.h"
#include "Camera/CameraComponent.h"

// Sets default values
AMyMainCharacter::AMyMainCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	if (!movement) {
		movement = this->GetCharacterMovement();

		originalSpeed = movement->MaxWalkSpeed;
		maxSpeed = originalSpeed * 2.0f;
		minSpeed = originalSpeed * 0.5f;
	}
}

// Called when the game starts or when spawned
void AMyMainCharacter::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AMyMainCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyMainCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis("Move Right / Left", this, &AMyMainCharacter::OnSideMove);
	PlayerInputComponent->BindAxis("Look Up / Down Mouse", this, &AMyMainCharacter::OnCameraTurned);
	PlayerInputComponent->BindAxis("Turn Right / Left Mouse", this, &AMyMainCharacter::OnCameraTurned);
	PlayerInputComponent->BindAxis("Move Forward / Backward", this, &AMyMainCharacter::OnStraightMove);

	PlayerInputComponent->BindAction("OnSprinted", IE_Pressed, this, &AMyMainCharacter::OnSprintActivted);
	PlayerInputComponent->BindAction("OnSprinted", IE_Released, this, &AMyMainCharacter::OnSprintDeactivted);

	PlayerInputComponent->BindAction("OnCrouched", IE_Pressed, this, &AMyMainCharacter::OnCrouchActivted);
	PlayerInputComponent->BindAction("OnCrouched", IE_Released, this, &AMyMainCharacter::OnCrouchDeactivted);
}

void AMyMainCharacter::OnStraightMove(float value)
{
	if (value == 0)
		return;

	FVector movementDirection = GetActorForwardVector();
	movementDirection *= value >= 0 ? 1 : -1;

	this->AddMovementInput(movementDirection, 300);
}

void AMyMainCharacter::OnSideMove(float value)
{
	if (value == 0)
		return;

	FVector movementDirection = GetActorRightVector();
	movementDirection *= value >= 0 ? 1 : -1;

	this->AddMovementInput(movementDirection, 300);
}

void AMyMainCharacter::OnCameraTurned(float value)
{
	if (value == 0)
		return;

	this->AddControllerYawInput(value);
}

void AMyMainCharacter::OnCameraLookedUp(float value)
{
	if (value == 0)
		return;

	this->AddControllerPitchInput(value);
}

void AMyMainCharacter::OnSprintActivted()
{
	movement->MaxWalkSpeed = maxSpeed;
	if (myShake)
		GetWorld()->GetFirstPlayerController()->PlayerCameraManager->StartCameraShake(myShake, CAMERA_SHAKE_VALUE);

	if (myCamera) {

		if (originalCameraFieldOfView == 0)
			originalCameraFieldOfView = myCamera->FieldOfView;

		myCamera->SetFieldOfView(100.0f);
	}

	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, FString::Printf(TEXT("Speed: %.2f"), movement->MaxWalkSpeed));
}

void AMyMainCharacter::OnSprintDeactivted()
{
	movement->MaxWalkSpeed = originalSpeed;
	if (myCamera && originalCameraFieldOfView != 0)
		myCamera->SetFieldOfView(originalCameraFieldOfView);

	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, FString::Printf(TEXT("Speed: %.2f"), movement->MaxWalkSpeed));
}

void AMyMainCharacter::OnCrouchActivted()
{
	movement->MaxWalkSpeed = minSpeed;
	movement->Crouch();

	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Green, FString::Printf(TEXT("Speed: %.2f"), movement->MaxWalkSpeed));
}

void AMyMainCharacter::OnCrouchDeactivted()
{
	movement->MaxWalkSpeed = originalSpeed;
	movement->UnCrouch();

	GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Green, FString::Printf(TEXT("Speed: %.2f"), movement->MaxWalkSpeed));
}

