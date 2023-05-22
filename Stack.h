using Item = char;

class Stack
{
private:
	enum { MAX = 10 };
	Item items[MAX];
	int top;

public:
	Stack();

	bool Empty() const;
	bool Full() const;

	bool Push(const Item& item);
	bool Pop(Item & item);
};