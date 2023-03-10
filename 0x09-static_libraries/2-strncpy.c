#include "main.h"

/**
 * _strncpy - copies a strings
 * @dest: string1
 * @src: string2
 * @n: max of n characters
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
