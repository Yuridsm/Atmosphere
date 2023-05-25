using Item = char;

class Stack
{
private:
	Item * items;
	int top;
	int max; // capacity

public:
	Stack(int length);
	~Stack();

	bool Empty() const;
	bool Full() const;

	bool Push(const Item& item);
	bool Pop(Item & item);
};