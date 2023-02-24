#include "main.h"

/**
 * print_most_numbers - prints from 0 to 9 except 2 and 4
 */
void print_most_numbers(void)
{
	int a = '0';

	for (; a <= '9'; a++)
	{
		if (a == '2' || a == '4')
		{
			continue;
		}
		_putchar(a);
	}
	_putchar('\n');
}

