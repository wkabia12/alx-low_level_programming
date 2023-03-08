#include "main.h"

/**
 * _sqrt_recursion - returns natural square
 * @n:number to find sqrt of
 * Return: Natural sqrt on n
 */
int _sqrt_recursion(int n)
{
	if (sqrt(n) != (int) sqrt(n))
		return (-1);
	return (sqrt(n));
}
