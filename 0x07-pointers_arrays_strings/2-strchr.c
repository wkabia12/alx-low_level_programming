#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to be searched
 * @c: character to search
 * Return: pointer to first occurance of c
 */
char *_strchr(char *s, char c)
{
	char *found = strchr(s, c);

	return (found);
}
