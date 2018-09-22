#include<iostream>
#include "AdvCircle.h"
#include "MyPoint.h"
using namespace std;


void main()
{	
	AdvCircle c1;
	c1.setCircle(2, 3, 4);
	MyPoint p1;
	p1.setPoint(5, 4);
	int tag = c1.judge(p1);
	if (tag == 1)
	{
		cout << "点在圆内" << endl;
	}
	else if(tag==0)
	{
		cout << "点在圆上" << endl;
	}
	else if(tag == -1)
	{
		cout << "点在圆外" << endl;
	}

	system("pause");
	
}


