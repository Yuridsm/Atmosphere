#include <iostream>
#include <string>

class SignInUseCase
{
public:
	SignInUseCase();
	void Execute(string & login, string & password);
}
