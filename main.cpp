#include <iostream>

#include "Stack.h"
#include "src/UseCase/SignUpUseCase.h"


using namespace std;

class IOrder
{
public:
	virtual void Execute() = 0;
};

class OrderA : public IOrder
{
public:
	void Execute() override
	{
		std::cout << "Executing A\n";
	}
};

class OrderB : public IOrder
{
public:
	void Execute() override
	{
		std::cout << "Executing B\n";
	}
};

class OrderC : public IOrder
{
public:
	void Execute() override
	{
		std::cout << "Executing C\n";
	}
};

class OrderUseCase
{
private:
	IOrder& _order;

public:
	OrderUseCase(IOrder& order) : _order(order) 
	{

	}

	void Execute()
	{
		_order.Execute();
	}
};

int main()
{
	SignUpUseCase mySignUp = SignUpUseCase();
	string mail = "yuri@mail.com";
	string password = "12345678";
	mySignUp.Execute(mail, password);

	return 0;
}