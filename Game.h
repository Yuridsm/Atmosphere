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
	Game2(const string & title, float value, int time);
	~Game2();

	const Game2& Compare(const Game2& game) const;

	void Get(const string & title, float price);
	void Update(float price);
	void Play(int time);
	void Display() const;

	float Cost() const;
	int Hours() const;
};

inline void Game2::Calculate()
{
	if (hour > 0)
		cost = price / hour;
}

inline float Game2::Cost() const
{
	return price;
}

inline int Game2::Hours() const
{
	return hour;
}


/**
* Aux Functions
*/

const Game2& TheMostPlayed(const Game2&, const Game2&);
const Game2& TheLeastPlayed(const Game2&, const Game2&);
