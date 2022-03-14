#include "Student.h"
#include <iostream>
float n;

void Student::setName()
{
	std::cout << "Introduceti numele studentului: ";
	std::cin.getline(this->name, 30);

}
void Student::setMath()
{
	std::cout << "Introduceti nota de la matematica: ";
	std::cin >> n;
	while (n < 1 || n>10)
	{
		std::cout << "Nota nu este valida, introduceti alta nota: ";
		std::cin >> n;
		std::cout << std::endl;
	}
	this->mathg = n;
}
void Student::setEng()
{
	std::cout << "Introduceti nota de la engleza: ";
	std::cin >> n;
	while (n < 1 || n>10)
	{
		std::cout << "Nota nu este valida, introduceti alta nota: ";
		std::cin >> n;
		std::cout << std::endl;
	}
	this->engg = n;
}
void Student::setHist()
{
	std::cout << "Introduceti nota de la istorie: ";
	std::cin >> n;
	while (n < 1 || n>10)
	{
		std::cout << "Nota nu este valida, introduceti alta nota: ";
		std::cin >> n;
		std::cout << std::endl;
	}
	this->histg = n;
}
void Student::setAvg()
{
	this->avgg = (this->mathg + this->engg + this->histg) / 3;
}

char* Student::getName()
{
	return this->name;
}
float Student::getMath()
{
	return this->mathg;
}
float Student::getEng()
{
	return this->engg;
}
float Student::getHist()
{
	return this->histg;
}
float Student::getAvg()
{
	return this->avgg;
}
