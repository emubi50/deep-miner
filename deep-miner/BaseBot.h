#pragma once
#include "Position.h"
#include <vector>
using std::vector; // all bots can now use just "vector"
class BaseBot
{
public:
	BaseBot();
	virtual ~BaseBot();
	virtual void mine(vector<int>& column) = 0;
	void moveBot();
	Position getPos();
	void setPos(Position pos);
	int getScore();

protected:
	Position pos;
	int score;
	bool isCpu;
private:
};

