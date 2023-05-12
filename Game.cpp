#include <iostream>
#include "Game.h"

Game2::Game2()
{
	name = "";
	price = 0;
	hour = 0;
	cost = 0;
}

Game2::Game2(const string & title, float value)
{
	name = title;
	price = value;
	hour = 0;
	cost = value;
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