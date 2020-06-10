#include"Rectangle.h"
#include"Point.h"

//���
ostream& operator<< (ostream& os, const Point &p)
{
	return os << "(" << p._x << "," << p._y << ")";
}
//���ھ������棬�����߽�
bool Point::isInSide(const Rectangle &rec)const
{
	if (_x >= rec._left_up._x&&_x <= rec._right_down._x)
		if (_y <= rec._left_up._y&&_x >= rec._right_down._y)
			return true;
	return false;
}