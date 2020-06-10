#include"Rectangle.h"
#include"Point.h"

//输出
ostream& operator<< (ostream& os, const Point &p)
{
	return os << "(" << p._x << "," << p._y << ")";
}
//点在矩形里面，包括边界
bool Point::isInSide(const Rectangle &rec)const
{
	if (_x >= rec._left_up._x&&_x <= rec._right_down._x)
		if (_y <= rec._left_up._y&&_x >= rec._right_down._y)
			return true;
	return false;
}