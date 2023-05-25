using Item = char;

class Stack
{
private:
	Item * items;
	int top;
	int max; // capacity

	void Expand();

public:
	Stack();
	Stack(int length);
	~Stack();

	bool Empty() const;

	void Push(const Item& item);
	bool Pop(Item & item);
};