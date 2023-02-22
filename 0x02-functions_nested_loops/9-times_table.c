#include "main.h"
/**
 * times_table - returns times table
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int product = i * j;

			if (j == 0)
			{
				_putchar('0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (product < 10)
			{
				_putchar(product + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (product < 81)
			{
				_putchar(product / 10 + '0');
				_putchar(product % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('8');
				_putchar('1');
			}

		}
		_putchar('\n');
	}
}
