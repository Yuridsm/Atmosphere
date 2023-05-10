#include <iostream>
#include "Game.h"

void Game::Get(const string& title, float price)
{
	name = title;
	price = price;
	hour = 0;
	cost = price;
}

void Game::Update(float price)
{
	price = price;
	Calculate();
}

void Game::Play(int time)
{
	hour = hour + time;
	Calculate();
}
