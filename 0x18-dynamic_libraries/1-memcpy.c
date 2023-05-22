#include "main.h"

/**
 * _memcpy - fills memory with constant byte
 * @dest: original string
 * @src: string to copy over
 * @n: bytes to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
