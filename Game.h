#include <string>

using std::string;

class Game2 {
private:
	string name;
	float price;
	int hour;
	float cost;

	void Calculate();

public:
	void Get(const string & title, float price);
	void Update(float price);
	void Play(int time);
	void Display();
};

inline void Game2::Calculate()
{
	if (hour > 0)
		cost = price / hour;
}