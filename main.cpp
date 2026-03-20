#include <iostream>
#include "Engine.h"
int main()
{
	class UEngine* GameEngine;
	GameEngine = new UEngine;

	GameEngine->Lender();

	delete GameEngine;
	GameEngine = nullptr;

}