#pragma once
#include "BaseBot.h"
class SortBot : public BaseBot
{
public:
	SortBot();
	~SortBot();
	void mine(vector<int>& column);
	void moveBot();
private:
	Position pos;
	int score;
	bool isCpu;
};

