#include "main.h"

/**
 * is_palindrome - checks if string is palindrome
 * @s: string to be checked
 * Return: return 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	if (s == palindrome_helper(s))
		return (1);
	else
		return (0);
}
