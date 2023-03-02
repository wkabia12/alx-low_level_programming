#include "main.h"

/**
 * rot13 - encoding in ROT13
 * @s: string
 * Return: pointer to encoded string
 */
char *rot13(char *s)
{
	int i, j, len = strlen(s);
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int len2 = strlen(alpha);


	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < len2 - 1; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = rot13[j];
			}
			else
				continue;
		}
	}
	return (s);
}
