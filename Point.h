#define _CRT_SECURE_NO_WARNINGS
#ifndef _POINT 
#define _POINT
#include <iostream>

using namespace std;

//Daniel Hay - 209042720

//A class that describes a point on a plane
class Point
{
public:
//C'tor
	Point(double x, double y);
	Point();

//Metods 
public:
	double getX() const;
	double getY() const;
	void setX(double x);
	void setY(double y);
	void setScaleX(double scaleX);
	void setScaleY(double scaleY);

//Date Members 
private:
	double _x;
	double _y;
	double _scaleX;
	double _scaleY;


};

#endif