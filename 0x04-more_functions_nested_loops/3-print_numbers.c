#include "main.h"

/**
 * print_numbers - prints from 0 to 9
 */
void print_numbers(void)
{
	int a = '0';

	for (; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}

