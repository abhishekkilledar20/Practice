#include <cmath>
#include "Point3D.h"

Point3D::Point3D()
{
	m_x = 0.0;
	m_y = 0.0;
	m_z = 0.0;
}

Point3D::Point3D(double x, double y, double z)
{
	m_x = x;
	m_y = y;
	m_z = z;
}

Point3D::~Point3D()
{

}

double Point3D::GetX() const
{
	return m_x;
}

double Point3D::GetY() const
{
	return m_y;
}

double Point3D::GetZ() const
{
	return m_z;
}

void Point3D::SetX(double x)
{
	m_x = x;
}

void Point3D::SetY(double y)
{
	m_y = y;
}

void Point3D::SetZ(double z)
{
	m_z = z;
}

void Point3D::Set(double x, double y, double z)
{
	m_x = x;
	m_y = y;
	m_z = z;
}

double Point3D::Distance(const Point3D& point) const
{
	double distance = sqrt(((m_x - point.m_x) * (m_x - point.m_x)) +
							((m_y - point.m_y) * (m_y - point.m_y)) +
							((m_z - point.m_z) * (m_z - point.m_z)));
	return distance;
}
