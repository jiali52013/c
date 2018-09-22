#include "AdvCircle.h"
#include<iostream>
#include "MyPoint.h"
using namespace std;

void AdvCircle::setCircle(int _r, int _x0, int _y0)
{
	r = _r;
	x0 = _x0;
	y0 = _y0;
}


int AdvCircle::judge(MyPoint &t)
{
	int i = (r*r - (x0 - t.getX1())*(x0 - t.getX1()) - (y0 - t.getY1())*(y0 - t.getY1()));
	if (i > 0)
	{
		return 1;
	}
	else if (i == 0)
	{
		return 0;
	}
	else if (i < 0)
	{
		return -1;
	}
}
