#include "main.h"
/**
 * _memset - to fill a block memory with a specific value
 * @s: starting address of the momery to be filled
 * @b: the desired value choice
 * @n: number of the bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
