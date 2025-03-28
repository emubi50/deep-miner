#pragma once
#include "BaseMiner.h"
class SortMiner : public BaseMiner
{
public:
	SortMiner();
	~SortMiner();
	void mine(std::vector<int>& column);
	void moveMiner();
private:
	Position pos;
	int score;
	bool isCpu;
};

