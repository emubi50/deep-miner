#include "BaseBot.h"

BaseBot::BaseBot() {
	this->pos = Position();
	this->score = 0;
	this->isCpu = false;
}

BaseBot::~BaseBot() {
	// TODO - implement BaseBot::~BaseBot
	throw "Not yet implemented";
}

void BaseBot::mine(std::vector<int> & column) {
	score += column.back();
	column.pop_back();
}

void BaseBot::moveBot() {
	// TODO - implement BaseBot::moveBot
	throw "Not yet implemented";
}

Position BaseBot::getPos() {
	return this->pos;
}

void BaseBot::setPos(Position pos) {
	this->pos = pos;
}

int BaseBot::getScore() {
	return this->score;
}