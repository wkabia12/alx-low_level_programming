#include "main.h"
#include <string.h>

/**
 * print_rev - output reverse string followed by new line
 * @s: Pointer argument
 */
void print_rev(char *s)
{
	int len = strlen(s);
	int i;
	char rev[500];

	for (i = 0; i < len-1; i++)
	{
		rev[i] = s[-(i + 2)];
	}
	puts(rev);
}
