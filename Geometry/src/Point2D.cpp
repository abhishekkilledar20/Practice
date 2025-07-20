#include "Point2D.h"

Point2D::Point2D(double a, double b)
{
	x = a;
	y = b;
}

Point2D::Point2D(const Point2D& point)
{
	x = point.x;
	y = point.y;
}

double Point2D::GetX() const
{
	return x;
}

double Point2D::GetY() const
{
	return y;
}
