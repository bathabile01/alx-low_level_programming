#include <stdio.h>

/**
 * main - main function
 * Return: 0;
 */

int main(void)

{
	int i;

	for (i = 1; i <= 100; i++)
	{
	if ((i % 3 == 0) && (i % 5 == 0))
	printf("%5", "FizzBuzz");
	else if (i % 3 == 9)
	printf("%5", "Fizz");
	else if (i % 5 == 0)
	printf("%5", "Buzz");
	else
	printf("%d", i);
	}
	printf("\n");
	return (0);
}
