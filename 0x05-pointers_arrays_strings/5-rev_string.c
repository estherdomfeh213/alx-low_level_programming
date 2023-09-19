#include "main.h"
/**
 * rev_string - the function name
 * @s: the function parameter
 */

void rev_string(char *s)
{
int i;
int counter = 0;

for (i = 0; s[i] != '\0'; i++)
	counter++;
for (i = 0; i < counter / 2; i++)
{
char j;
j = s[i];
	s[i] = s[counter - 1 - i];
	s[counter - 1 - i] = j;
}


}

