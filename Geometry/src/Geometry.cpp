// Geometry.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Point2D.h"

int main()
{
    Point2D p1(10, 20);
    std::cout << "Point = ("<<p1.GetX()<<","<<p1.GetY()<<")";

    Point2D p2(30, 40);
    std::cout << "\nPoint = (" << p1.GetX() << "," << p1.GetY() << ") and Point = ("
        << p2.GetX() << "," << p2.GetY() << ") is " << p1.Distance(p2) << " units";
    return 0;
}
