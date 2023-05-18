#include <iostream>
#include <string>

#include "Structural.h";

using namespace std;

void Update(GameWithStruct * self, float price)
{
	self->price = price;

	Calculate(self);
}

void Play(GameWithStruct * self, int time)
{
	self->hour += time;
	Calculate(self);
}

void Display(const GameWithStruct * self)
{
	cout << self->name << "R$"
		<< self->price << " "
		<< self->hour << "h = R$"
		<< self->cost << "/h\n";
}

void Calculate(GameWithStruct * self)
{
	if (self->hour > 0)
		self->cost = self->price / self->hour;
}
