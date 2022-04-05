#include "Canvas.h"

int main()
{
	Canvas can(100,100);
	can.DrawCircle(60, 30, 20, '*');
	//can.Print();
	can.Clear();
	can.Print();
}