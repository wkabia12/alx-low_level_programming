#include "main.h"
#include <stdlib.h>
/**
 * _isdigit - checks for digits
 * @c: argument to be checked
 * Return: 1 if uppercase, 0 otherwise
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
