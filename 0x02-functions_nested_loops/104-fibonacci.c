#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Calculates and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2, separated by comma and space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long a = 1, b = 2, temp;
	int count;

	printf("%lu, %lu", a, b);

	for (count = 2; count < 98; count++)
	{
		temp = a + b;
		a = b;
		b = temp;

		printf(", %lu", temp);
	}

	printf("\n");

	return (0);
}
