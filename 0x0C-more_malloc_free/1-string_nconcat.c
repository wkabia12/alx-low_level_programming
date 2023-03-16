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
	unsigned int s1_len, s2_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n < s2_len)
	{
		ptr = malloc(s1_len + n + 1);
		if (ptr == NULL)
		{
			free(ptr);
			return (NULL);
		}
		strcpy(ptr, s1);
		strncat(ptr, s2, n);
	}
	else
	{
	ptr = malloc(s1_len + s2_len + 1);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	strcpy(ptr, s1);
	strcat(ptr, s2);
	}
	return (ptr);
}
