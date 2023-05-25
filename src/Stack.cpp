#include "Headers/Stack.h"

Stack::Stack(int length)
{
	items = new Item[length]; // On Stack memory
	max = length;
	top = 0;
}

Stack::~Stack()
{
	delete[] items;
}

bool Stack::Empty() const
{
	return top == 0;
}

bool Stack::Full() const
{
	return top == max;
}

bool Stack::Push(const Item& item)
{
	if (top < max)
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
