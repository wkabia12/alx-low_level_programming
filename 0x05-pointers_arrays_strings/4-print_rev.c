#include "main.h"
#include <string.h>

/**
 * print_rev - output reverse string followed by new line
 * @s: Pointer argument
 */
void print_rev(char *s)
{
	char rev[1000];
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
	puts(rev);
}
