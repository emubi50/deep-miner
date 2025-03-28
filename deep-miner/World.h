#pragma once
#include <vector>
#include "Position.h"
using std::vector;
class World
{
public:
	World();
	void generateWorld();
	void displayWorld();
	void updateTile(int x, int y, int z, int value);
	Position findLowestZ();
protected:

private:
	vector<vector<vector<int>>> world;
	vector<BaseMiner*> miners;
};

