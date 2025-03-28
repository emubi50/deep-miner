#pragma once
#include "World.h"
#include "BaseMiner.h"
class Game
{
public:
	Game();
	~Game();
	void generateWorld();
	void rearrangeWorld();
	void run();
private:
	World world;
	BaseMiner* miners;
};

