#include "Math.h"
#include <iostream>
using namespace std;

int main()
{
	std::cout << Math::Add(2, 3) << std::endl;
	std::cout << Math::Add(1, 2, 3) << std::endl;
	std::cout << Math::Add(2.5, 2.7) << std::endl;
	std::cout << Math::Add(2.5, 2.7, 2.9) << std::endl;
	std::cout << Math::Mul(2, 6) << std::endl;
	std::cout << Math::Mul(3, 4, 5) << std::endl;
	std::cout << Math::Mul(2.5, 2.6) << std::endl;
	std::cout << Math::Mul(2.5, 2.6, 2.7) << std::endl;
	std::cout << Math::Add(6, 1, 2, 3, 4, 5, 6) << std::endl;
	std::cout << Math::Add("100", "200") << std::endl;
}