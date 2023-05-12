#include <iostream>
#include "Game.h"

inline void Game2::Calculate()
{
	if (hour > 0)
		cost = price / hour;
}

void Game2::Get(const string& title, float price)
{
	name = title;
	price = price;
	hour = 0;
	cost = price;
}

void Game2::Update(float price)
{
	price = price;
	Calculate();
}

void Game2::Play(int time)
{
	hour = hour + time;
	Calculate();
}

void Game2::Display()
{
	std::cout << "fgsafasdfa" << std::endl;
}