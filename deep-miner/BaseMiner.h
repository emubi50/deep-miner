#pragma once
#include <vector>
#include "Position.h"
class BaseMiner
{
public:
	virtual void mine(std::vector<int>& column) = 0;
	void moveMiner();
	Position getPos();
	void setPos(Position pos);
	int getScore();

protected:
	Position pos;
	int score;
	bool isCpu;
private:
};

