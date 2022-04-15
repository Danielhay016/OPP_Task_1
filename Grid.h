#define _CRT_SECURE_NO_WARNINGS
#ifndef _GRID
#define _GRID
#include <iostream>
#include "Rectangle.h"

using namespace std;

//Daniel Hay - 209042720

class Grid
{
	
public:
	//C'tor
	Grid(double tileW, double tileH, int width, int height, int color);
	//D'tor
	~Grid();

	//Metods 
public:
    Rectangle* getRectAtPoint(const Point& p);
	Rectangle* getRectAtIndex(int i);

public:
	void moveGrid(double deltaLeft, double deltaTop);
	void scaleGrid(double rectWidth, double rectHeight);

	//Data Members 
private:
	int _numOfRecs;
	Rectangle** _RectArr;
};

#endif
