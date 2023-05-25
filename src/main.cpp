#include <iostream>

#include "Headers/Stack.h"
#include "UseCase/SignUpUseCase.h"

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
	Stack stack { 5 };
	stack.Push('A');
	stack.Push('H');
	stack.Push('L');
	stack.Push('I');
	stack.Push('P');

	/*while (!stack.Empty())
	{
		Item i;
		stack.Pop(i);
		cout << i << endl;
	}*/

	Item i;
	while (stack.Pop(i))
		cout << i << endl;

	return 0;
}