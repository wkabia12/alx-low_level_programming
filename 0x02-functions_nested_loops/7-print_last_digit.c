#include "main.h"
/**
 * print_last_digit - prints last digit
 * Return: value of last digit
 */
int print_last_digit(int i)
{
	int x = i % 10;

	_putchar(abs(x));
	return (abs(x));
}
