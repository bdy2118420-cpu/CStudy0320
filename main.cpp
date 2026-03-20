#include <iostream>
#include "Engine.h"
#include "Player.h"
#include "WildBoar.h"
#include "Goblin.h"
#include "Slime.h"
#include <time.h>

using namespace std;

int main()
{
	int WildboarNum = 0;
	int GoblinNum = 0;
	int SlimeNum = 0;

	srand(time(0));
	WildboarNum = rand() % 10;
	GoblinNum = rand() % 10;
	SlimeNum = rand() % 10;


	AWildBoar* WildBoar = new AWildBoar[WildboarNum];
	AGoblin* Goblin = new AGoblin[GoblinNum];
	ASlime* Slime = new ASlime[SlimeNum];

	for (int i = 0; i < WildboarNum; i++)
	{
		WildBoar[i].Move();
	}

	for (int i = 0; i < GoblinNum; i++)
	{
		Goblin[i].Move();
	}
	for (int i = 0; i < SlimeNum; i++)
	{
		Slime[i].Move();
	}


	return 0;
}