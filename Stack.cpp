#include "Stack.h"

Stack::Stack()
{
	top = 0;
}

bool Stack::Empty() const
{
	return top == 0;
}

bool Stack::Full() const
{
	return top == Stack::MAX;
}

bool Stack::Push(const Item& item)
{
	if (top < Stack::MAX)
	{
		items[top++] = item;
		return true;
	}
	return false;
}

bool Stack::Pop(Item& item)
{
	if (top > 0)
	{
		item = items[--top];
		return true;
	}
	return false;
}
