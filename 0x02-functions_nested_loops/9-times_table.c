#include "main.h"
/**
 * times_table - returns times table
 */
void times_table(void)
{
	int i,j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j < 10; i++)
		{
			int product = i * j;

			_putchar(product / 10 + '0');
			_putchar(product % 10 + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
