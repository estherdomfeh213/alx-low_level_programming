#include "main.h"
/**
 * reverse_array - function for reverse array
 * @a: parameter function
 * @n: parameter function 2
 * Return: always void
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
