#include "main.h"

/**
 * print_line - prints lines of lenght n
 * @n: lenght of line to be drawn
 */
void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (;  i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

