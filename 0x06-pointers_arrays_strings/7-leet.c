#include "main.h"

/**
 * leet - mozart encoding
 * @s: string
 * Return: pointer to converted string
 */
char *leet(char *s)
{
	char letterUpr[] = {'A', 'E', 'O', 'T', 'L'};
	char letterLow[] = {'a', 'e', 'o', 't', 'l'};
	char encode[] = {'4', '3', '0', '7', '1'};
	int i, j, len = strlen(s);

	for (j = 0; j < len; j++)
	{
		for (i = 0; i < 5; i++)
		{
			if (s[j] == letterUpr[i] || s[j] == letterLow[i])
			{
				s[j] = encode[i];
			}
			else
				continue;
		}
	}
	return (s);
}
