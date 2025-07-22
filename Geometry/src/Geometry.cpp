// Geometry.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Point2D.h"
#include "Point3D.h"

int main()
{
    Point2D p1(10, 20);
    std::cout << "Point = ("<<p1.GetX()<<","<<p1.GetY()<<")";

    Point2D p2(30, 40);
    std::cout << "\nPoint = (" << p1.GetX() << "," << p1.GetY() << ") and Point = ("
        << p2.GetX() << "," << p2.GetY() << ") is " << p1.Distance(p2) << " units";

    Point3D pt(1, 2, 3),pt1(4,5,6);
    std::cout << "\nDistance between Point(1,2,3) and Point (4,5,6) is " << pt1.Distance(pt);

    return 0;
}
