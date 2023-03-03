#include "main.h"
#include <stdlib.h>
#include <limits.h>
/**
 * print_number - prints numbers
 * @n: number to be printed
 */
void print_number(int n)
{
	if (n == INT_MIN)
	{
		_putchar('-');
		print_number(INT_MAX / 10);
		print_number((INT_MAX % 10) + 1);
	}
	if (n < 0)
	{
		_putchar('-');
		n = abs(n);
	}
	if (n / 10 > 0)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}
