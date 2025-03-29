#pragma once
#include <vector>
#include "Position.h"
using std::vector;
class World
{
public:
	World();
	~World();
	void displayWorld();
	void updateTile(int x, int y, int z, int value);
	Position findLowestZ();
protected:

private:
	void generateWorld();
	vector<vector<vector<int>>> world;
};

