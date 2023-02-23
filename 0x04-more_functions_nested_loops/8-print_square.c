#include "main.h"

/**
 * print_square - prints squares of lenght n
 * @size: lenght of square to be drawn
 */
void print_square(int size)
{
	int i = 0, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (; i < size; i++)
		{
			j = 0;

			for (; j < size; i++)
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
