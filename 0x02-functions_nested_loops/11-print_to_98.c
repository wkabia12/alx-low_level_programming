#include "main.h"
/**
 * print_to_98 -prints natural numbes to 98
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			_putchar(n + '0');
			_putchar(',');
		}
	}
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			_putchar(n + '0');
			_putchar(',');
		}
	}
}
