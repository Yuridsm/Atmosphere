class Coord
{
private:
	int x;
	int y;

public:
	void Translate(int dx, int dy);
	void MoveTo(int px, int py);
	int GetX();
	int GetY();
};

inline int Coord::GetX()
{
	return x;
}

inline int Coord::GetY()
{
	return y;
}
