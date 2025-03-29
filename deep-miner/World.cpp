#include "World.h"

World::World()
{
	vector<vector<vector<int>>> slice;
	vector<vector<int>> row;
	vector<int> column;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			column.clear();
			for (int k = 0; k < 10; k++) {
				column.push_back(rand() % 9 + 1);
			}
			row.push_back(column);
		}
		slice.push_back(row);
	}
	world = slice;
}

World::~World()
{
}

void World::displayWorld()
{
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			for (int k = 0; k < 10; k++) {
				cout << "World at(" << i << ", " << j << ", " << k << "): " << world.at(i).at(j).at(k) << '\n';
			}
			cout << '\n';
		}
	}
	cout << '\n';
	// TODO - implement World::displayWorld
	//throw "Not yet implemented";
}

void World::updateTile(int x, int y, int z, int value)
{
	// TODO - implement World::updateTile
	throw "Not yet implemented";
}

Position World::findLowestZ()
{
	// TODO - implement World::findLowestZ
	throw "Not yet implemented";
}

void World::generateWorld()
{
	// TODO - implement World::generateWorld
	throw "Not yet implemented";
}