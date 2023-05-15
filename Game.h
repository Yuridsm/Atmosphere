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
	Game2();
	Game2(const string & title, float value = 0);
	~Game2();
	void Get(const string & title, float price);
	void Update(float price);
	void Play(int time);
	void Display() const;
};

inline void Game2::Calculate()
{
	if (hour > 0)
		cost = price / hour;
}