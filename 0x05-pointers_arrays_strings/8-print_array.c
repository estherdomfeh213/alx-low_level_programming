#include "main.h"
/**
 * print_array - the function name
 * @a: 1 parameter
 * @n: 2 parameter
 */

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);

	if (i < n - 1)
		printf(", ");
}
	printf("\n");
}
