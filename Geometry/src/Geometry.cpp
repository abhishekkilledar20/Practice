// Geometry.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Point2D.h"

int main()
{
    Point2D p1(10, 20);
    std::cout << "Point = ("<<p1.GetX()<<","<<p1.GetY()<<")";

    return 0;
}
