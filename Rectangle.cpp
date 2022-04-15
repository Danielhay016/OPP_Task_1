#define _CRT_SECURE_NO_WARNINGS
#include "Rectangle.h"
#include <iostream>

using namespace std;

//Daniel Hay - 209042720


int Rectangle::m_count = 0;
//C'tor
Rectangle::Rectangle(double left, double top, double width, double height, int color)
{
	//Defining the points of the rectangle and color
	TopLeft.setX(left);
	TopLeft.setY(top);
	BottomRight.setX((left + width));
	BottomRight.setY((top + height));
	setColor(color);
	++m_count;
}

//return rectangle color
int Rectangle::getColor() const
{
	return reColor;
}

//Returns the top left point
Point& Rectangle::getTopLeftPoint()
{
	return TopLeft;
}

//Returns the bottom right point
Point& Rectangle::getBottomRightPoint()
{
	return BottomRight;
}

//set the color of the rectangle
void Rectangle::setColor(int color)
{
	reColor = color;
}

//Checks if the point is inside the rectangle
bool Rectangle::contains(const Point& p)
{
	bool res = false;
	if ((TopLeft.getX() <= p.getX() && p.getX() <= BottomRight.getX()) && (TopLeft.getY() <= p.getY()  && p.getY() <= BottomRight.getY()))
	{
		res = true;
	}

	return res;

}

//Moves the rectangle in space according to the values given to it
void Rectangle::moveRect(double deltaLeft, double deltaTop)
{
	TopLeft.setX((TopLeft.getX() + deltaLeft));
	TopLeft.setY((TopLeft.getY() + deltaTop));
	BottomRight.setX((BottomRight.getX() + deltaLeft));
	BottomRight.setY((BottomRight.getY() + deltaTop));
}

//Expansion and contraction of the rectangle according to new height and width
void Rectangle::scaleRect(double rectWidth, double rectHeight)
{

	//Calculation of current height and length
	double currentW = BottomRight.getX() - TopLeft.getX();
	double currentH = BottomRight.getY() - TopLeft.getY();

	//Placement of a new scale in points
	TopLeft.setScaleX(rectWidth/ currentW);
	BottomRight.setScaleX(rectWidth / currentW);
	TopLeft.setScaleY(rectHeight /currentH);
	BottomRight.setScaleY(rectHeight / currentH);

}
