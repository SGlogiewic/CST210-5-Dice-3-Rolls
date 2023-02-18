#pragma once
#include <iostream>
#include "Die.h"
class Player
{
private:
	Die bones[2];
	int total, showTotal;
	int roll();
public:
	Player();
	int getTotal();
	void rollAgain();
};

