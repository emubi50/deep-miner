#pragma once
#include "BaseBot.h"
class ThreeBot
{
public:
	ThreeBot();
	~ThreeBot();
	void mine(vector<int>& column);
	void moveBot();
private:
	Position pos;
	int score;
	bool isCpu;
};

