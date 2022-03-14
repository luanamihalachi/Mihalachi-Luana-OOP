#include <iostream>
int turn_to_number(char* s)
{
	int nr = 0, pow = 1;
	for (int i = strlen(s) - 1; i >= 0; i--)
	{
		nr = nr + (s[i] - '0') * pow;
		pow = pow * 10;
	}

	return nr;
}
int main()
{
	char s[100];
	int suma = 0;

	FILE* fin;
	errno_t err;
	err = fopen_s(&fin, "in.txt", "r");
	while (!(feof(fin)))
	{
		fgets(s, 100, fin);
		if (s[strlen(s) - 1] == '\n')
			s[strlen(s) - 1] = NULL;
		suma = suma + turn_to_number(s);
	}
	printf("%d", suma);
	return 0;
}