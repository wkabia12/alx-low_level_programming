#include "main.h"
/**
 * islower - return if letter lowercase
 * @c: argument 1
 * Return: 1 - lowercase, 0 - otherwise
 */

int islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
