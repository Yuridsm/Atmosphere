#include <iostream>

#include "Headers/Stack.h"

Stack::Stack() 
{
	items = new Item[1];
	max = 1;
	top = 0;
}

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

void Stack::Expand()
{
	std::cout << " Expaning capacity to " << max << std::endl;

	// Create new space
	Item* vector = new Item[2 * max + 1];

	// Copy items to new space
	for (int i = 0; i < max; i++)
		vector[i] = items[i];

	// Free old space
	delete[] items;

	// Update attributes
	items = vector;
	max = 2 * max + 1;

	std::cout << " para " << max << std::endl;
}

void Stack::Push(const Item& item)
{
	std::cout << "Pushing [" << item << "]" << std::endl;

	// Whether the stack is full
	if (top == max)
		Expand();

	items[top++] = item;

	std::cout << " [" << item << "] Pushed" << std::endl;
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
