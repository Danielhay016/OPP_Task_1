#define _CRT_SECURE_NO_WARNINGS
#ifndef _RECT
#define _RECT
#include "Point.h"

using namespace std;


class Rectangle
{
public:
    //C'tor
	Rectangle(double left, double top, double width, double height, int color);
	//D'tor
	~Rectangle() { --m_count; };


	//Metods
public:
	int getColor() const;
	Point& getTopLeftPoint();
	Point& getBottomRightPoint();
	void setColor(int color);
	
public:
	bool contains(const Point& p);
	void moveRect(double deltaLeft, double deltaTop);
	void scaleRect(double rectWidth, double rectHeight);


	//Data Members
public:
	static int m_count;

private : 
	Point TopLeft, BottomRight;
	int reColor;
};

#endif
