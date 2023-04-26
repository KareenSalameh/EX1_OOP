#ifndef _RECT
#define _RECT

//Kareen Salameh 322752981

#include "Point.h"
#include <iostream>

using namespace std;

class Rectangle {
private:
	Point* t_left;
	Point* b_right;
	int _color;
public:
	Rectangle(double left, double top, double width, double height, int color);
	~Rectangle() { --m_count; };

public:
	int getColor() const;
	Point& getTopLeftPoint();
	Point& getBottomRightPoint();
	void setColor(int color);

public:
	bool contains(const Point& p);
	void moveRect(double deltaLeft, double deltaTop);
	void scaleRect(double rectWidth, double rectHeight);

public:
	static int m_count;
};

#endif