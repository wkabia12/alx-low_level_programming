#include "3-calc.h"
/**
 *op_add - adds 2 numbers
 *@a: 1st number
 *@b: 2nd Number
 *Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 *op_sub - subs 2 numbers
 *@a: 1st number
 *@b: 2nd Number
 *Return: diffrence of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 *op_mul - multiplys 2 numbers
 *@a: 1st number
 *@b: 2nd Number
 *Return: product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 *op_div - adds 2 numbers
 *@a: 1st number
 *@b: 2nd Number
 *Return: dividend of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 *op_mod - adds 2 numbers
 *@a: 1st number
 *@b: 2nd Number
 *Return: modulus of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
