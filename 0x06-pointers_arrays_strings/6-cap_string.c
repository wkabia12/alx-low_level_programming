#include "main.h"

/**
 * cap_string - converts all lowercase to uppercase
 * @s: string
 * Return: pointer to converted string
 */
char *cap_string(char *s)
{
	int i = 0;
	char sep[] = " \t\n;.!?\"(){}\0";
	char temp[2];

	while (s[i] != '\0')
	{
		if (i == 0 && isalpha(s[i]))
		{
			s[i] = toupper(s[i]);
			i++;
		}
		else
		{
			temp[0] = s[i];
			if (strstr(sep, temp) && isalpha(s[i + 1]))
			{
				s[i + 1] = toupper(s[i + 1]);
				i++;
			}
			else
				i++;
		}
	}
	return (s);
}
