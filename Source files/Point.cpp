//Kareen Salameh 322752981
#include "Point.h"

//Constructor of the class Point
Point::Point(double x, double y) {
	_x = x;
	_y = y;
}

void Point::setX(double x) {
	_x = x;
}
void Point::setY(double y) {
	_y = y;
}
void Point::setScaleX(double scaleX) {
	_scaleX = scaleX;
}
void Point::setScaleY(double scaleY) {
	_scaleX = scaleY;
}
//returning in getters the version of (x,y) point * scalex/y values.
double Point::getX() const {
	return (_x * _scaleX);
}
double Point::getY() const {
	return (_y * _scaleY);
}