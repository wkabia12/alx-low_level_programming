#include "main.h"
#include <string.h>

/**
 * puts2 - output every other character
 * @str: Pointer argument
 */
void puts2(char *str)
{
	char skip[1000];
	int i, j, count = 0;

	while (str[count] != '\0')
	{
		count++;
	}

	for (i = 0; i < count; i++)
	{
		if (i / 2 == 0)
		{
			skip[j] = str[i];
			j++;
		}
	}
	str = skip;
}
