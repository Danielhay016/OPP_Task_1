#define _CRT_SECURE_NO_WARNINGS
#include "Grid.h"
#include <iostream>

using namespace std;


//C'tor 
Grid::Grid(double tileW, double tileH, int width, int height, int color)
{
	//Calculating the amount of rectangles in the array
	_numOfRecs = (width * height);
	_RectArr = new Rectangle * [_numOfRecs];

	//Loops that form the grid of rectangles
	int k = 0; 
	for (int i = 0 ; i < width ; i++ )
	{ 
	  
	    for (int j = 0; j < height ; j++)
	    {
			_RectArr[k] = new Rectangle(tileW*i, tileH*j ,tileW,tileH,color);
			k++;
			
     	}
		
		
    }
}

//D'tor - Release dynamic allocations
Grid::~Grid() {

	for (int i = 0; i < _numOfRecs ; i++)
	{
			delete this->_RectArr[i];
	}

	delete[] _RectArr;
}

//Checks which rectangle the point is contained in
Rectangle* Grid::getRectAtPoint(const Point& p)
{

	for (int i = 0; i < _numOfRecs ; i++)
	{
		if (_RectArr[i]->contains(p) == true)
		{
			return  _RectArr[i];
		}
	}

}

//Returns the rectangle in the position of the index
Rectangle* Grid::getRectAtIndex(int i)
{
	return _RectArr[i];
}


//Moves all the rectangles in space
void Grid::moveGrid(double deltaLeft, double deltaTop)
{
	for (int i = 0; i < _numOfRecs ; i++)
	{
		_RectArr[i]->moveRect(deltaLeft, deltaTop);
	}
}

//Shrinks and expands the entire grid of rectangles
void Grid::scaleGrid(double rectWidth, double rectHeight)
{
	for (int i = 0; i < _numOfRecs ; i++)
	{
		_RectArr[i]->scaleRect(rectWidth, rectHeight);
	}
}






