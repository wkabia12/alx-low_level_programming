#include "main.h"

/**
 * more_numbers - prints from 0 to 14
 */
void more_numbers(void)
{
	int a = '0';

	for (; a <= 15; a++)
	{
		if (a < '9')
		{
			_putchar(a);
		}
		else
		{
			_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
		}
	}
	_putchar('\n');
}

