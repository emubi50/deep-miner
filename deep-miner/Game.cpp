#include "Game.h"

Game::Game()
{
	world = World();
	debugMode = true;
	world.displayWorld();
}
Game::~Game()
{

}

void Game::rearrangeWorld()
{

}
void Game::run()
{	
	clear();
	char choice = 'c';
	while (choice != 'p' && choice != 'w')
	{
		cout << "Would you like to play or to watch? (p/w)\n";
		cin.get(choice);
		cin.ignore(1000, '\n');
		clear();
		switch (choice)
		{
		case 'p':
			cout << "You chose to play.\n";
			selectBotType();
			break;
		case 'w':
			cout << "You chose to watch.\n";
			break;
		case 'd':
			(debugMode) ? debugMode = false : debugMode = true;
			cout << "Debug Mode: " << debugMode << "\n";
			break;
		case 'x':
			cout << "Exiting game.\n";
			exit(0);
			break;
		default:
			cout << "Invalid input. Please try again.\n";
			break;
		}
	}
}

void Game::selectBotType()
{
	clear();
}

void Game::clear()
{
	system("cls");
}