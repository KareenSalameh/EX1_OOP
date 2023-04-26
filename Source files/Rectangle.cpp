//Kareen Salameh 322752981

#include "Rectangle.h"

int Rectangle::m_count = 0;

//Rectangle Constructor
Rectangle::Rectangle(double left, double top, double width, double height, int color) {
	m_count++;
	t_left = new Point(left, top);
	b_right = new Point(left + width, top + height);
	_color = color;
}

//Defining methods from header
int Rectangle::getColor() const {
	return _color;
}
void Rectangle::setColor(int color) {
	_color = color;
}
Point& Rectangle::getTopLeftPoint() {
	return *t_left;
}
Point& Rectangle::getBottomRightPoint() {
	return *b_right;
}

bool Rectangle::contains(const Point& p) {
	if ((p.getX() >= t_left->getX() && p.getY() >= t_left->getY())
		&& (p.getX() <= b_right->getX() && p.getY() <= b_right->getY())) {
		return true;
	}
	else {
		return false;
	}
}
void Rectangle::moveRect(double deltaLeft, double deltaTop) {
	t_left->setX(t_left->getX() + deltaLeft);
	t_left->setY(t_left->getY() + deltaTop);
	b_right->setX(b_right->getX() + deltaLeft);
	b_right->setY(b_right->getY() + deltaTop);
}
void Rectangle::scaleRect(double rectWidth, double rectHeight) {
	double tempX, tempY;
	tempX = b_right->getX() - t_left->getX();
	tempY = b_right->getY() - t_left->getY();
	//if (rectWidth > tempX &&) {
		// Ya3ni need to bigger the rect.
	t_left->setScaleX(rectWidth / tempX);
	b_right->setScaleX(rectWidth / tempX);
	//if (rectHeight > tempY) {
	t_left->setScaleY(rectHeight / tempY);
	b_right->setScaleY(rectHeight / tempY);
	//}

//else if (tempX > rectWidth) {
//	//Need to reduce
// 
//	t_left->setScaleX(tempX / rectWidth);
//	b_right->setScaleX(tempX / rectWidth);

//}

/*else if (tempY > rectHeight) {

	t_left->setScaleY(tempY / rectHeight);
	b_right->setScaleY(tempY / rectHeight);
}*/
}