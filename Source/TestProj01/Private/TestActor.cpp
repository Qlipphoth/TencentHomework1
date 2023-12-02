// Fill out your copyright notice in the Description page of Project Settings.


#include "TestActor.h"
#include "Net/UnrealNetwork.h"

// Sets default values
ATestActor::ATestActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// // 逐一添加委托函数 
	// DelegateInst.AddLambda([]{ "Lambda 1"; }); // 绑定1
	// DelegateInst.AddLambda([]{ "Lambda 2"; }); // 绑定2
	// // 额外保存委托handle对象 
	// FDelegateHandle handleOb = DelegateInst.AddLambda([]{ "Lambda 3"; }); // 绑定3
	// // 绑定UFUNCTION时需要this指针
	// DelegateInst.AddUFunction(this, TEXT("FunctionName")); // 绑定4

	// // 通过广播执行，不需要判断是否绑定了委托函数 
	// DelegateInst.Broadcast();

	// // 解除绑定单个绑定，需要保存绑定时的 handle 对象
	// DelegateInst.Remove(FDelegateHandle);
	// // 如果想解除所有绑定，可能会想到使用RemoveAll()，但该函数只会解绑指定指针所绑定的委托，
	// // 如下调用会清除当前类所绑定的委托，当前类绑定委托指的是绑定的时候用到了 this 指针，
	// // 所以执行后只会清除上述的绑定4，因为用到了this指针，其余3个绑定仍然可以被广播执行
	// DelegateInst.RemoveAll(this);

	// // 可以使用Clear接口清除所有绑定，其底层实现利用的是Unbind() 
	// DelegateInst.Clear();

}

// Called when the game starts or when spawned
void ATestActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATestActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

