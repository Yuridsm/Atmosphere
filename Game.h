#include <string>

using std::string;

class Game {
private:
	string name;
	float price;
	int hour;
	float cost;

	void Calculate()
	{
		if (hour > 0)
			cost = price / hour;
	}

public:
	void Get(const string & title, float price);
	void Update(float price);
	void Play(int time);
	void Display();
};