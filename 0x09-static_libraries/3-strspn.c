#include "main.h"

/**
 * _strspn - get lenght of prefix string
 * @s: string to be searched
 * @accept: substring to search
 * Return: len of initial substing containing accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = strspn(s, accept);

	return (len);
}
