#pragma once

class APlayer;
class AWildboar;
class AGoblin;
class ASlime;

class UWorld
{
public:
	UWorld();
	~UWorld();

	int* Worldsize;

	void Lender();

	AWildboar* Wildboar;
	AGoblin* Goblin;
	ASlime* Slime;
	APlayer* Player;

};

