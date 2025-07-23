#pragma once
class Point3D
{
	double m_x, m_y, m_z;

public:
	Point3D();

	Point3D(double x, double y, double z);

	~Point3D();

	double GetX() const;

	double GetY() const;

	double GetZ() const;

	void SetX(double x);

	void SetY(double y);

	void SetZ(double z);

	void Set(double x, double y, double z);

	double Distance(const Point3D& point)const;

};

