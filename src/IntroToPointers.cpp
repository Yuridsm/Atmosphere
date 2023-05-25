#include <iostream>
#include "Headers/IntroToPointers.h"

using namespace std;

void ExecuteUseCase()
{
	cout << "Hello Pointers" << endl;
}

void f(int* pi) 
{
	void* pv = pi; // Implicit conversion of int* to void*

	int* pi2 = static_cast<int*>(pv);
	cout << * pi2 << endl;
}