#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Grid.h"
using namespace std;

//Daniel Hay - 209042720

int main()
{
	Grid g(4, 2, 3, 2, 0);

	if (g.getRectAtIndex(3)->getTopLeftPoint().getX() != 4)
		cout << "error in grid creation (-16)" << endl;

	if (g.getRectAtIndex(3)->getBottomRightPoint().getY() != 4)
		cout << "error in grid creation (-16)" << endl;

	Point p1(5, 1);
	g.getRectAtPoint(p1)->setColor(2);
	if (g.getRectAtIndex(2)->getColor() != 2)
		cout << "error in finding point in rect (-16)" << endl;

	g.getRectAtIndex(2)->setColor(2);

	g.moveGrid(4, 3);
	Point p2(10, 3.5);
	g.getRectAtPoint(p2)->setColor(2);
	if (g.getRectAtIndex(2)->getColor() != 2)
		cout << "error in move grid (-16)" << endl;

	g.getRectAtIndex(2)->setColor(2);

	g.scaleGrid(2, 1);
	Point p3(7, 3);
	g.getRectAtPoint(p3)->setColor(2);
	if (g.getRectAtIndex(5)->getColor() != 2)
		cout << "error in scale grid (-16)" << endl;

	{
		Grid g2(4, 2, 3, 2, 0);
	}

	if (g.getRectAtIndex(0)->m_count > 6)
		cout << "did not clear the memory (-16)" << endl;

	cout << "done" << endl;

	return 0;
}