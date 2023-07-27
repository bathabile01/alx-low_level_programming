#include "main.h"

/**
 * print_number - Print numbers chars
 * @n: Inteeger params
 * Return: 0
 */

void print_number(int n)

{
	unsigned int ni;

	ni = n;

	if (n < 0)
	{
	_putchar('-');
	ni = -n;
	}

	if (ni / 10 != 0)
	{
	print_number(ni / 10);
	}
	_putchar((ni % 10) + '0');
}
