#include "main.h"
#include <string.h>

/**
 * puts_half - output second half of string
 * @str: Pointer argument
 */
void puts_half(char *str)
{
	int i = 0;
	int len = strlen(str);

	if (len % 2 == 0)
		i = len / 2;
	else
		i = (len + 1) / 2;

	for (; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
