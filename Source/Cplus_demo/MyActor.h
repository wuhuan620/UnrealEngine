// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class CPLUS_DEMO_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyCateogry")
	FString MyName;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "MyCateogry")
	FString YourName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyCateogry")
	FString TestName;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
