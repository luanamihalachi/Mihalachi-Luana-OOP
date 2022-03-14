#include "NumberList.h"

int main()
{
	NumberList a;
	a.Init();
	a.Add(2);
	a.Add(5);
	a.Add(20);
	a.Add(223);
	a.Add(0);
	a.Add(78);
	a.Add(3);
	a.Sort();
	a.Print();
}