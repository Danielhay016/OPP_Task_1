#define _CRT_SECURE_NO_WARNINGS
#include "Point.h"
using namespace std;

//Daniel Hay - 209042720


//C'tor
Point::Point(double x, double y)
{
	_x = x;
	_y = y;
	_scaleX = 1;
	_scaleY = 1;
}

//Defulte C'tor
Point::Point()
{
	_x = 0;
	_y = 0; 
	_scaleX = 1;
	_scaleY = 1;

}

//return X
double Point::getX() const
{
	return _x*_scaleX;

}

//return Y
double Point::getY() const
{
	return _y*_scaleY;
}

//Variable placement operation _x
void Point::setX(double x)
{
		_x = x;
	
}

//Variable placement operation _y
void Point::setY(double y)
{

	_y = y;
		
}

//Expansion / contraction value of X
void Point::setScaleX(double scaleX)
{
	_scaleX = scaleX;
}

//Expansion / contraction value of Y
void Point::setScaleY(double scaleY)
{
	_scaleY = scaleY;
}


