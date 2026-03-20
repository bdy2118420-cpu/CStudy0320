#include "Engine.h"

UEngine::UEngine()
{
}

UEngine::~UEngine()
{
}

void UEngine::Play()
{
	Lender();
	UWorld.Player->Attack();
	UWorld.Goblin->MoveMonster();
}
