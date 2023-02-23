#include "main.h"

/**
 * print_diagonal - prints diagonal of lenght n
 * @n: lenght of line to be drawn
 */
void print_diagonal(int n)
{
	int i = 0, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (;  i < n; i++)
		{
			j = 0;

			for (; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');

		}
		_putchar('\n');
	}
}

