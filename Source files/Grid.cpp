//Kareen Salameh 322752981
#include "Grid.h"

//Constructor of grid
Grid::Grid(double tileW, double tileH, int width, int height, int color) {
	//defining the number of rects in grid.
	numOfRect = width * height;
	// defining the array as explained in the PDF
	arrOfRect = new Rectangle * [numOfRect];
	int index = 0;
	for (int i = 0; i < width; i++) {
		for (int j = 0; j < height; j++) {
			arrOfRect[index] = new Rectangle(i * tileW, j * tileH, tileW, tileH, color);
			index++;

		}
	}
}
//DSTOR
//after removing each rect, remove all the array.
Grid::~Grid() {
	for (int i = 0; i < numOfRect; i++) {
		delete this->arrOfRect[i];
	}
	delete arrOfRect;
}

Rectangle* Grid::getRectAtPoint(const Point& p) {
	for (int i = 0; i < numOfRect; i++) {
		if (arrOfRect[i]->contains(p)) {
			return arrOfRect[i];
		}
	}
	//The compiler returns warning because it may be nothing returned in the "if" statement.
	return arrOfRect[0];
}
Rectangle* Grid::getRectAtIndex(int i) {
	//Is it really that simple? :D
	return arrOfRect[i];
}

void Grid::moveGrid(double deltaLeft, double deltaTop) {
	for (int i = 0; i < numOfRect; i++) {
		arrOfRect[i]->moveRect(deltaLeft, deltaTop);
	}
}
void Grid::scaleGrid(double rectWidth, double rectHeight) {
	for (int i = 0; i < numOfRect; i++) {
		arrOfRect[i]->scaleRect(rectWidth, rectHeight);
	}
}