#include "main.h"
#include <string.h>

/**
 * rev_string - output reverse string
 * @s: Pointer argument
 */
void rev_string(char *s)
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
}
