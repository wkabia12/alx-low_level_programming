#include "main.h"

/**
 * _strpbrk - 1st occurance of any bytes of accept in s
 * @s: string to be searched
 * @accept: substring to search
 * Return: first character to match
 */
char *_strpbrk(char *s, char *accept)
{
	char *found = strpbrk(s, accept);

	return (found);
}
