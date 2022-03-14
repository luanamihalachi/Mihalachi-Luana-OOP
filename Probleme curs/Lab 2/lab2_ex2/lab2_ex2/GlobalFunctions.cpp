#include "GlobalFunctions.h"
#include <string.h>

int CompareName(Student a, Student b)
{
	if (strcmp(a.getName(), b.getName()) == 0)
		return 0;
	else if (strcmp(a.getName(), b.getName()) == 1)
		return 1;
	else 
		return -1;
}
int CompareMath(Student a, Student b)
{
	if (a.getMath() == b.getMath())
		return 0;
	else if (a.getMath() > b.getMath())
		return 1;
	else 
		return -1;
}
int CompareEng(Student a, Student b)
{
	if (a.getEng() == b.getEng())
		return 0;
	else if (a.getEng() > b.getEng())
		return 1;
	else
		return -1;
}
int CompareHist(Student a, Student b)
{
	if (a.getHist() == b.getHist())
		return 0;
	else if (a.getHist() > b.getHist())
		return 1;
	else
		return -1;
}
int CompareAvg(Student a, Student b)
{
	if (a.getAvg() == b.getAvg())
		return 0;
	else if (a.getAvg() > b.getAvg())
		return 1;
	else
		return -1;
}
