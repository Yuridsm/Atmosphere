#include "SignUpUseCase.h"
#include <iostream>

SignUpUseCase::SignUpUseCase()
{

}

void SignUpUseCase::Execute(string & email, string & password)
{
	std::cout << "Email: " << email << "\n";
}