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
		Game2("qwe", 4.4f),
		Game2("asd", 4.4f),
		Game2("zxc", 4.4f),
	};

	cout << "Colection of Games:\n";

	for (int i = 0; i < MAX; i++)
		collection[i].Display();
	return 0;
}