#include "Monster.h"
#include "Goblin.h"
#include "Wildboar.h"
#include "Slime.h"
#include <iostream>



AMonster::AMonster()
{
	MonsterX = 0;
	MonsterY = 0;
	Mesh = 0;
}
AMonster::~AMonster()
{
	

}

void AMonster::MoveMonster()
{
	std::cout << "몬스터가 이동했습니다." << std::endl;
}


