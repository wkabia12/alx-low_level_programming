#include "main.h"

/**
 * print_triangle - prints lines of lenght n
 * @size: height of triangle to be drawn
 */
void print_triangle(int size)
{
	int i, j, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			c = i;
			while (c < (size - 1))
			{
				_putchar(' ');
				c++;
			}
			for (j = 0; j <= i; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
