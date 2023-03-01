#include "main.h"

/**
 * cap_string - converts all lowercase to uppercase
 * @s: string
 * Return: pointer to converted string
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (i == 0 && isalpha(s[i]))
		{
			s[i] = toupper(s[i]);
			i++;
		}
		else
		{
			if ((ispunct(s[i]) || isspace(s[i])) && isalpha(s[i + 1]))
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
