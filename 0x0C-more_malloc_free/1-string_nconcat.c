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
	size_t s1_len, s2_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = strnlen(s1, sizeof(s1));
	s2_len = strnlen(s2, sizeof(s2));

	if (n < s2_len)
	{
		ptr = malloc(s1_len + n + 1);
		if (ptr == NULL)
		{
			free(ptr);
			return (NULL);
		}
		strncpy(ptr, s1, s1_len);
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
		strncpy(ptr, s1, s1_len);
		strncat(ptr, s2, s2_len);
	}
	return (ptr);
}
