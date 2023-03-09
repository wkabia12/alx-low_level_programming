#include "main.h"

/**
 * is_palindrome - checks if string is palindrome
 * @s: string to be checked
 * Return: return 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = strlen(s);

	return (palindrome_helper(s, 0, len - 1));
}
