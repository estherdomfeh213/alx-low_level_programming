#include <stdio.h>


/**
 * main - A program that prints the alphabet in lowercase and upper case
 *
 * Return: 0(Success).
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

	{
	if (letter != 'e' && letter != 'q')
	putchar(letter);
	}

	putchar('\n');

	return (0);
}

