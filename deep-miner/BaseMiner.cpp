#include "BaseMiner.h"

void BaseMiner::mine(std::vector<int> & column) {
	score += column.back();
	column.pop_back();
}

void BaseMiner::moveMiner() {
	// TODO - implement BaseMiner::moveBot
	throw "Not yet implemented";
}

Position BaseMiner::getPos() {
	return this->pos;
}

void BaseMiner::setPos(Position pos) {
	this->pos = pos;
}

int BaseMiner::getScore() {
	return this->score;
}