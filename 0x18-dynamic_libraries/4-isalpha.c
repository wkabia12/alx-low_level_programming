#include "main.h"
/**
 * _isalpha - return if alpha
 * @c: argument 1
 * Return: 1 - alpha, 0 - otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
