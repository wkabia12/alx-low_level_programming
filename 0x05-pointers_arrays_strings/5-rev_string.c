#include "main.h"
#include <string.h>

/**
 * rev_string - output reverse string followed by new line
 * @s: Pointer argument
 */
void rev_string(char *s)
{
	char rev[500];
	int i, j, count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	j = count - 1;

	for (i = 0; i < count; i++)
	{
		rev[i] = s[j];
		j--;
	}
	s = rev;
}
