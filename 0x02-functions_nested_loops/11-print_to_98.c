#include "main.h"
/**
 * print_to_98 -prints natural numbes to 98
 * @n: starting integer
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i < 98; i++)
		{
			_putchar(i);
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			_putchar(i);
		}
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
