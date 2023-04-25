//Kareen Salameh 322752981
#include "Grid.h"

Grid::Grid(double tileW, double tileH, int width, int height, int color) {
	//num of all rectangles in grid.
	numOfRect = width * height;
	//Setting rects array as example A**() in the exercise/
	arr_rect = new Rectangle * [numOfRect];
	for (int i = 0; i < width; i++) {
		for (int j = 0; j < height; i++) {
			int current_i = 0;
			arr_rect[current_i] = new Rectangle((i * tileW), (j * tileH), tileW, tileH, color);
			current_i++;
		}
	}
}
Grid::~Grid() {
	for (int i = 0; i < numOfRect; i++) {
		delete arr_rect[i];
	}
	delete arr_rect;
}


Rectangle* Grid::getRectAtPoint(const Point& p) {
	for (int i = 0; i < numOfRect; i++) {
		if (arr_rect[i]->contains(p)) {
			return arr_rect[i];
		}
	}
}
Rectangle* Grid::getRectAtIndex(int i) {
	//is it really that simple ? :D
	return arr_rect[i];
}


void Grid::moveGrid(double deltaLeft, double deltaTop) {
	//int index = 0;
	for (int temp = 0; temp < numOfRect; temp++) {
		/*arr_rect[temp]->getTopLeftPoint().setX(arr_rect[temp]->getTopLeftPoint().getX() + deltaLeft);
		arr_rect[temp]->getBottomRightPoint().setY(arr_rect[temp]->getBottomRightPoint().getY() + deltaTop);
		temp++;*/
		//FORGOT ABOUT THE RECT METHOD -> moveRect :'( LOL
		arr_rect[temp]->moveRect(deltaLeft, deltaTop);

	}

}
void Grid::scaleGrid(double rectWidth, double rectHeight) {
	for (int temp = 0; temp < numOfRect; temp++) {
		arr_rect[temp]->scaleRect(rectWidth, rectHeight);

	}

}