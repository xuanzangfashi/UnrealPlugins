// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MeshGizmo.generated.h"
//DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDestoryDelegate, FString, Content, int32, StatusCode);
UCLASS()
class LITTLEFATTRANSFORMMESH_API AMeshGizmo : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMeshGizmo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
private:
	class UStaticMeshComponent* mAxis;
	class UStaticMeshComponent* ForwardAxis;
	class UStaticMeshComponent* RightAxis;
public:
	AActor* AttachedActor;
	
};
