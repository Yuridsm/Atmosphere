#include "Point.h"

void Point::Translate(int dx, int dy)
{
	x += dx;
	y += dy;
}

void Point::MoveTo(int px, int py)
{
	x = px;
	y = py;
}
