#include <string>
#ifndef STRUCTURAL
#define STRUCTURAL

struct Game
{
	std::string name;
	float price;
	int hour;
	float cost;
};

Game Get(const std::string& title, float price);
void Update(Game& game, float price);
void Play(Game& game, int time);
void Display(const Game& game);
void Execute();

#endif