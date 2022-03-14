#include "Header.h"
#include <iostream>
#include <random>
std::mt19937 randomNr(std::random_device{}());

int main()
{
	int randFiles = randomNr() % (20 - 10 + 1) + 10; //numarul de fisiere care vor fi generate
	int randChar = randomNr() % (2000000 - 1000000 + 1) + 1000000; //numarul de caractere din fiecare fisier

	create_files(randFiles, randChar);


}