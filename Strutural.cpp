#include <iostream>
#include <string>

#include "Structural.h";

using namespace std;

Game Get(const string& title, float price)
{
	Game game;

	game.name = title;
	game.price = price;
	game.hour = 0;
	game.cost = price;

	return game;
}

void Update(Game& game, float price)
{
	game.price = price;

	if (game.hour > 0)
		game.cost = game.price / game.cost;
}

void Play(Game& game, int time)
{
	game.hour += time;

	if (game.hour > 0)
		game.cost = game.price / game.hour;
}

void Display(const Game& game)
{
	cout << game.name << "R$"
		<< game.price << " "
		<< game.hour << "h = R$"
		<< game.cost << "/h\n";
}

void Execute()
{
	Game minecraft;

	minecraft = Get("Minecraft", 199.99f);
	Display(minecraft);
}