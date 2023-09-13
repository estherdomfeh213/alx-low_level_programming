#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Calculates and prints the sum of even-valued terms in
 * the Fibonacci sequence up to 4,000,000.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long a = 1, b = 2, temp, sum = 0;

	while (a <= 4000000)
	{
		if (a % 2 == 0)
		{
			sum += a;
		}
		temp = a + b;
		a = b;
		b = temp;
	}

	printf("%lu\n", sum);

	return (0);
}
