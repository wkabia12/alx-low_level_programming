#include "main.h"

/**
 * string_nconcat - concatenate 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes of 2 to be concat'ed
 * Return: pointer to new memory allocated for concat'ed string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n < strlen(s2))
	{
		ptr = malloc(strlen(s1) + n + 1);
		if (ptr == NULL)
		{
			free(ptr);
			return (NULL);
		}
		ptr = strncat(s1, s2, n);
	}
	else
	{
		ptr = malloc(strlen(s1) + strlen(s2) + 1);
		if (ptr == NULL)
		{
			free(ptr);
			return (NULL);
		}
		ptr = strcat(s1, s2);
	}
	return (ptr);
}
