#pragma once
class Point2D
{
	double m_x, m_y;

public:

	Point2D();

	Point2D(double a, double b);

	~Point2D();

	double GetX()const;

	double GetY()const;

	void SetX(double x);

	void SetY(double y);

	void Set(double x, double y);

	double Distance(const Point2D& point) const;

};

