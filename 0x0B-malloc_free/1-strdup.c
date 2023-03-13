#include "main.h"

/**
 * _strdup - return pointer to new mem space containig copy of str
 * @str: string to be printed
 * Return: pointer to duplicate
 */
char *_strdup(char *str)
{
	char *dup;

	if (str == NULL)
		return (NULL);
	dup = strdup(str);
	return (dup);
}
