#pragma once
#include "BaseMiner.h"
class ThreeMiner
{
public:
	ThreeMiner();
	~ThreeMiner();
	void mine(std::vector<int>& column);
	void moveMiner();
private:
	Position pos;
	int score;
	bool isCpu;
};

