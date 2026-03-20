#include "World.h"
#include "Player.h"
#include "Goblin.h"
#include "Wildboar.h"
#include "Slime.h"
#include <iostream>
UWorld::UWorld()
{
	Player = new APlayer;
	Goblin = new AGoblin[3];
	Wildboar = new AWildboar[3];
	Slime = new ASlime[3];
	Worldsize = new int;
}

UWorld::~UWorld()
{
	delete Player;
	Player = nullptr;
	delete[] Goblin;
	Goblin = nullptr;
	delete[] Wildboar;
	Wildboar = nullptr;
	delete[] Slime;
	Slime = nullptr;

}

void UWorld::Lender()
{
	std::cout << "월드 및 플레이어, 몬스터출력" << std::endl;
}
