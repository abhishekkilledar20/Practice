#pragma once
class Point2D
{
	double x, y;

public:

	Point2D(double a, double b);

	Point2D(const Point2D& point);

	double GetX()const;

	double GetY()const;

};

