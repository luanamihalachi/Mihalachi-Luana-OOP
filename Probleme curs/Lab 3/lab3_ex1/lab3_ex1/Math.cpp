#include "Math.h"
#include <cstdarg>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <iostream>

int Math::Add(int a, int b)
{
	return a + b;
}

int Math::Add(int a, int b, int c)
{
	return a + b + c;
}

int Math::Add(double a, double b)
{
	return a + b;
}

int Math::Add(double a, double b, double c)
{
	return a + b + c;
}

int Math::Mul(int a, int b)
{
	return a * b;
}

int Math::Mul(int a, int b, int c)
{
	return a * b * c;
}

int Math::Mul(double a, double b)
{
	return a * b;
}

int Math::Mul(double a, double b, double c)
{
	return a * b * c;
}

int Math::Add(int count, ...)
{
	int s = 0;
	va_list lista;
	va_start(lista, count);
	for (int i = 0; i < count; i++)
		s += va_arg(lista, int);
	va_end(lista);
	return s;
}

char* Math::Add(const char* a, const char* b)
{
	if (a == nullptr || b == nullptr)
		return nullptr;
	else
	{
		int n = 0, m=0;
		for (int i = 0; i < strlen(a); i++)
			n = n * 10 + (a[i] - '0');
		for (int i = 0; i < strlen(b); i++)
			m = m * 10 + (b[i] - '0');
		int c = m + n;
		int k = 0;
		int p = c;
		while (c)
		{
			k++;
			c /= 10;
		}
		char* s;
		s = (char*)malloc(k);
		_itoa_s(p, s, sizeof(s), 10);
		return s;
	}
}