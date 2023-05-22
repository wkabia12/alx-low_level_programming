#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: memory area pointed to
 * @b: constant byte to fill
 * @n: bytes to be printed
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
