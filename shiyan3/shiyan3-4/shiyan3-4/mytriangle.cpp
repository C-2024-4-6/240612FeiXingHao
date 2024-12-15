#pragma once
#include<iostream>
#include"mytriangle.h"
using namespace std;
bool is_valid(double side1, double side2, double side3)
{
	if ((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side2) && (abs(side1 - side2) < side3) && (abs(side1 - side3) < side2) && (abs(side2 - side3) < side1))
		return true;
	else
		return false;
}
double _area(double side1, double side2, double side3)
{
	double s,x;
	s = (side1 + side2 + side3) / 2;
	x = sqrt(s * (s - side1) * (s - side2) * (s - side3));
	return x;
}