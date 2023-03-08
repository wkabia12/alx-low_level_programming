#include "main.h"
#include <math.h>
int _sqrt_helper(int n, int start, int end);

/**
 * _sqrt_recursion - returns natural square
 * _sqrt_helper - sub function to find square
 * @n:number to find sqrt of
 * Return: Natural sqrt on n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_helper(n, 1, n));
}
