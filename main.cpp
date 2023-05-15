#include <openssl/evp.h>
#include <openssl/rand.h>
#include <string>
#include <iostream>
#include <iomanip>

#include "Game.h"

using namespace std;

int main() {

	// Non const
    Game2 game01 { "Game 01", 12.99f };
	game01.Update(22.99f);
	game01.Play(2);
	game01.Display();

	// Const
	const Game2 game02{ "Game 02", 12.99f };
	game01.Display();


	return 0;
}