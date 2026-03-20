#include <iostream>
#include "Player.h"


APlayer::APlayer()
{

	PlayerX = 0;
	PlayerY = 0;
}

APlayer::~APlayer()
{

}

void APlayer::Move()
{
	std::cout << "플레이어가 움직인다"<<std::endl;
}

void APlayer::Attack()
{
	std::cout << "플레이어가 공격했다" << std::endl;
	std::cout << "몬스터 처치시 골드획득" << std::endl;
	GetGold();
}
