#include "main.h"
/**
 *_strlen - the function name for char s
 * @s: the function parameter
 * Return: the length of the string
 */

int _strlen(char *s)
{
int i;
int counter = 0;

for (i = 0; s[i] != '\0'; i++)
	counter++;
return (counter);
}
