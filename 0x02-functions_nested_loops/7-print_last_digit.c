#include "main.h"
/**
 * print_last_digit - prints last digit
 * @i: number to provide last digit
 * Return: value of last digit
 */
int print_last_digit(int i)
{
	int x = abs(i % 10);

	_putchar(x + '0');
	return (x);
}
