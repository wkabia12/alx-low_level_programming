#include "main.h"

/**
 * _strncat - concatenates 2 strings
 * @dest: string1
 * @src: string2
 * @n: max of n characters
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
