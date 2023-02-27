#include "main.h"
#include <string.h>

/**
 * print_rev - output reverse string followed by new line
 * @s: Pointer argument
 */
void print_rev(char *s)
{
	char temp;
	int i, j, len = 0;

	len = strlen(s);
	j = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j--;
	}
	puts(s);
}
