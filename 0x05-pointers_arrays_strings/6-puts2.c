#include "main.h"
#include <string.h>

/**
 * puts2 - output reverse string
 * @str: Pointer argument
 */
void puts2(char *str)
{
	int i, len = 0;

	len = strlen(str);

	for (i = 0; i < len; i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
