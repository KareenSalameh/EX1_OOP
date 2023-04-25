#ifndef _GRID
#define _GRID
 
//Kareen Salameh 322752981

#include "Rectangle.h"

using namespace std;

class Grid
{
	int numOfRect;
	Rectangle** arr_rect;
	//REctangle** arr_rect= new Rectangle*[numOfRect] -> in constructor

public:
	Grid(double tileW, double tileH, int width, int height, int color);
	~Grid();

public:
	Rectangle* getRectAtPoint(const Point& p);
	Rectangle* getRectAtIndex(int i);

public:
	void moveGrid(double deltaLeft, double deltaTop);
	void scaleGrid(double rectWidth, double rectHeight);
};

#endif