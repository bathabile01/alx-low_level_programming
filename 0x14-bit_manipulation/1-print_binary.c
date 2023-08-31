#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int k, comment = 0;
	unsigned long int corny;

	for (k = 63; k >= 0; k--)
	{
		corny = n >> k;

		if (corny & 1)
		{
			_putchar('1');
			comment++;
		}
		else if (comment)
			_putchar('0');
	}
	if (!comment)
		_putchar('0');
}
