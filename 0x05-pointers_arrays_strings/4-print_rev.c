#include "main.h"
#include <string.h>

/**
 * _print_rev - output reverse string followed by new line
 * @s: Pointer argument
 */
void print_rev(char *s)
{
	int len = strlen(s);
	int i;
	char rev[20];

	for (i = 0; i < len; i++)
	{
		rev[i] = s[-(i + 1)];
	}
	puts(rev);
}
