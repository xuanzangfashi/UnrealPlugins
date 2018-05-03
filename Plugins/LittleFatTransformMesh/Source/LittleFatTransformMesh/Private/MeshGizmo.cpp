// Fill out your copyright notice in the Description page of Project Settings.

#include "LittleFatTransformMeshPrivatePCH.h"
#include "./Runtime/Engine/Classes/Components/StaticMeshComponent.h"

// Sets default values
AMeshGizmo::AMeshGizmo()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	this->mAxis = CreateDefaultSubobject<UStaticMeshComponent>("UpAxis");
	//this->RightAxis = CreateDefaultSubobject<UStaticMeshComponent>("RightAxis");
	//this->ForwardAxis = CreateDefaultSubobject<UStaticMeshComponent>("ForwardAxis");

	this->mAxis->AttachToComponent(this->RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	//this->RightAxis->AttachToComponent(this->RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	//this->ForwardAxis->AttachToComponent(this->RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	UStaticMesh*tmpMesh =Cast<UStaticMesh>(StaticLoadObject(UStaticMesh::StaticClass(), 0, TEXT("/Game/Axis.Axis")));
	mAxis->SetStaticMesh(tmpMesh);
	//this->OnDestroyed(,)
}

// Called when the game starts or when spawned
void AMeshGizmo::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMeshGizmo::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

