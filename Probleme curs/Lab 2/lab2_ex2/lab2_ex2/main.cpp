#include "Student.h"
#include "GlobalFunctions.h"
#include <iostream>


int main()
{
	Student L, M;
	L.setName();
	L.setMath();
	L.setEng();
	L.setHist();
	L.setAvg();
	std::cin.get();
	M.setName();
	M.setMath();
	M.setEng();
	M.setHist();
	M.setAvg();
	std::cout << CompareName(L, M) << std::endl;
	std::cout << CompareMath(L, M) << std::endl;
	std::cout << CompareEng(L, M) << std::endl;
	std::cout << CompareHist(L, M)<<std::endl;
	std::cout << CompareAvg(L, M);
}