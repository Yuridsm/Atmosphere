#include <iostream>
#include "Atleta.h"

using namespace std;

void Atleta::Exibir() const
{
	cout << "Acertos: " Acertos << " ";
	cout << "Tentativas: " tentativas << " ";
	cout << "Percentual: " percentual << endl;
}