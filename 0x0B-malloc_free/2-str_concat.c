#include "main.h"

/**
 * str_concat - concats 2 strings in new memory allocated
 * @s1: first string
 * @s2: second string
 * Return: pointer to concat string
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len;

	if (s1 == NULL && s2 == NULL)
		str_concat("", "");
	if (s1 == NULL)
		str_concat("", s2);
	if (s2 == NULL)
		str_concat(s1, "");

	len = (strlen(s1) + strlen(s2) + 1);
	concat = malloc(len * sizeof(char));
	if (concat == NULL)
		return (NULL);
	strcpy(concat, s1);
	strcat(concat, s2);

	return (concat);
}
