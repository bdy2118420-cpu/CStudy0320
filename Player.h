#pragma once
#include "Gold.h"
class APlayer:public AGold
{
public:
	APlayer();
	~APlayer();

	int PlayerX;
	int PlayerY;

	void Move();

	void Attack();
};

