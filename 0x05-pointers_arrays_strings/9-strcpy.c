#include "main.h"
#include <string.h>

/**
 * _strcpy - copies string pointed to by src to dest
 * @dest: dest array
 * @src: src array
 * Return: dest pointer
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
