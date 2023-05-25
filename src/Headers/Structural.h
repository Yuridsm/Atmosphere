#include <string>
#ifndef STRUCTURAL
#define STRUCTURAL

using namespace std;

struct GameWithStruct
{
	string name;
	float price;
	int hour;
	float cost;

};

void Calculate(GameWithStruct * self);
void Update(GameWithStruct* self, float price);
void Play(GameWithStruct* self, int time);
void Display(const GameWithStruct& game);

#endif