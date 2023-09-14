#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print the first 98 Fibonacci numbers separated by commas
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int count;
	unsigned long fib1 = 1, fib2 = 2, sum;

	printf("%lu, %lu, ", fib1, fib2);

	for (count = 2; count < 98; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		if (count != 97)
			printf(", ");

		fib1 = fib2;
		fib2 = sum;
	}

	printf("...\n");
	return (0);
}
