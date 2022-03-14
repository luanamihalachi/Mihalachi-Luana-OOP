#pragma once
#include <iostream>
#include <stdio.h>
#include <errno.h>
#include <random>
std::mt19937 randomNr2(std::random_device{}());

void create_files(int randFiles, int randChar)
{
	FILE* file;
	errno_t err;
	char name[10];
	char letter;
	for (int i = 1; i <= randFiles; i++)
	{
		memset(name, 0, sizeof(name)); //numele fisierului va fi de tipul numar.txt
		sprintf_s(name, 3, "%d", i);
		strcat_s(name, sizeof(name), ".txt");
		err = fopen_s(&file, name, "w+");
		if (file != nullptr)
			for (int j = 1; j <= randChar; j++)
			{
				letter = 'a' + randomNr2() % 26; //se genereaza litera care va fi introdusa in fisier
				fprintf(file, "%c", letter); //se introduce litera in fisier

			}
	}
}