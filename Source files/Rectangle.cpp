//Kareen Salameh 322752981
#include "Rectangle.h"
//
int Rectangle::m_count = 0;

Rectangle::Rectangle( double left, double top, double width, double height, int color )
{
	++m_count;
	_color = color;
	t_left = new Point(left, top);
	b_right = new Point(left + width, top + height);

}//
int Rectangle::getColor() const {
	return _color;
}
Point& Rectangle::getTopLeftPoint() {
	return *(this->t_left);
}
Point& Rectangle::getBottomRightPoint() {
	return *(this->b_right);
}
void Rectangle::setColor(int color) {
	_color = color;
}

bool Rectangle::contains(const Point& p) {
	if ((p.getX() >= t_left->getX() && p.getX() <= b_right->getX()) &&
		p.getY() >= t_left->getY() && p.getY() <= b_right->getY())
		return true;
	else
		return false;
}
void Rectangle::moveRect(double deltaLeft, double deltaTop) {}
void Rectangle::scaleRect(double rectWidth, double rectHeight) {}
//