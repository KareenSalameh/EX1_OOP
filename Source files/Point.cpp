//Kareen Salameh 322752981

#include "Point.h"


Point::Point(double x, double y) {
	_x = x;
	_y = y;
	scale_X = 1;
	scale_Y = 1;
}

double Point::getX() const {
	return _x * scale_X;
}
double Point::getY() const {
	return _y * scale_Y;
}
void Point::setX(double x) {
	_x = x;
}
void Point::setY(double y) {
	_y = y;
}
void Point::setScaleX(double scaleX) {
	scale_X = scaleX;
}
void Point::setScaleY(double scaleY) {
	scale_Y = scaleY;
}