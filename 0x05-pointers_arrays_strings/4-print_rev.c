#include "main.h"
#include <string.h>

/**
 * print_rev - output reverse string followed by new line
 * @s: Pointer argument
 */
void print_rev(char *s)
{
	int i, j, len = 0;

	len = strlen(s);
	j = len - 1;

	for (i = 0; i < len; i++)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
