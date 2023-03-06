#include "main.h"

/**
 * _strstr - 1st occurance of any substring needle in haystack
 * @haystack: string to be searched
 * @needle: substring to search
 * Return: pointer to first occurance of needle
 */
char *_strstr(char *haystack, char *needle)
{
	char *found = strstr(haystack, needle);

	return (found);
}
