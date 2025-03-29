#pragma once
#include "World.h"
#include "BaseBot.h"
using std::cout;
using std::cin;
using std::string;

class Game
{
public:
	Game();
	~Game();
	void rearrangeWorld();
	void run();
	void selectBotType();
	void clear();
private:
	string OS;
	bool debugMode;
	World world;
	vector<BaseBot*> bots; // all exisitng bots stored in this dynamic array
};

