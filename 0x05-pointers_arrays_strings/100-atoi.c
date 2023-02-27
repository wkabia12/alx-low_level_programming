#include "main.h"
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _atoi - convert string to integer
 * @s: s array
 * Return: 0 or int
 */
int _atoi(char *s)
{
	int len = strlen(s);
	int i, j, count = 0;

	for (; i < len; i++)
	{
		if (isdigit(s[i]))
		{
			count++;
		}
		else
			continue;
	}
	if (count > 0)
	{
		for (; j < len; j++)
		{
			if (isalpha(s[j]))
			{
				s[j] = ' ';
			}
			else
				continue;
		}
	}
	else
		return (0);
	return (atoi(s));
}
