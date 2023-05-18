#include <openssl/evp.h>
#include <openssl/rand.h>
#include <string>
#include <iostream>
#include <iomanip>

#include "Game.h"

using namespace std;

const int MAX = 3;

int main() {

	Game2 collection[MAX] =
	{
		Game2("qwe", 4.4f, 1),
		Game2("asd", 4.4f, 2),
		Game2("zxc", 4.4f, 3),
	};

	cout << "Colection of Games:\n";

	//for (int i = 0; i < MAX; i++)
		//collection[i].Display();

	cout << "\tTesting..." << endl;

	Game2 go{ "Minecraft", 4.45f, 36 };
	Game2 gq{ "Top Gun Maverick", 19.99f, 9 };

	const Game2& test = go.Compare(gq, TheLeastPlayed);

	test.Display();

	// Working with Registers



	return 0;
}