#include "main.h"

/**
 * more_numbers - prints from 0 to 14
 */
void print_numbers(void)
{
	int a = 0;

	for (; a <= 15; a++)
	{
		if (a <= 9)
		{
			_putchar(a);
		}
		else
		{
			_putchar('1' + a % 10);
		}
	}
	_putchar('\n');
}
