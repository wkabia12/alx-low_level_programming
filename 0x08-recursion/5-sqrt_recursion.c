#include "main.h"

/**
 * _sqrt_helper - sub function to find square
 * @n1:number to find sqrt of
 * @rt:number guess from 1 to n/2
 * Return: Natural sqrt on n
 */
int _sqrt_helper(int n1, int rt)
{
	if ((rt * rt) == n1)
		return (rt);
	if (rt == n1 / 2)
		return (-1);
	return (_sqrt_helper(n1, rt + 1));
}
/**
 * _sqrt_recursion - returns natural square
 * @n:number to find sqrt of
 * Return: Natural sqrt on n
 */
int _sqrt_recursion(int n)
{
	int rt = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (_sqrt_helper(n, rt));
}
