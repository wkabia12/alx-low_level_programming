#include "main.h"

/**
 * string_toupper - converts all lowercase to uppercase
 * @s: string
 * Return: pointer to converted string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (isalpha(s[i]))
		{
			s[i] = toupper(s[i]);
			i++;
		}
		else
			i++;
	}
	return (s);
}
