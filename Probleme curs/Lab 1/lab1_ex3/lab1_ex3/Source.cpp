#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>

struct ordine
{
	int lungime;
	char c[100];
}cuv[100];
int i;

int main()
{
	char s[100];
	scanf("%[^\n]s", s);
	char* p = strtok(s, " ");
	while (p)
	{
		strcpy(cuv[i].c, p);
		cuv[i++].lungime = strlen(p);
		p = strtok(NULL, " ");
	}
	for (int j = 0; j < i - 1; j++)
		for (int k = j + 1; k < i; k++)
		{
			if (cuv[j].lungime < cuv[k].lungime)
				std::swap(cuv[j], cuv[k]);
			else
				if (cuv[j].lungime == cuv[k].lungime)
				{
					if (strcmp(cuv[j].c, cuv[k].c) > 0)  std::swap(cuv[j], cuv[k]);
				}
		}

	for (int j = 0; j < i; j++)
		printf("%s\n", cuv[j].c);
}
//I went to the library yesterday