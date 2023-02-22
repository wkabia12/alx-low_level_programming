#include "main.h"

/**
 *print_alphabet_x10 - lowercase alphabet x10
 *Return: returns 0
 */
void print_alphabet_x10(void)
{
	int i = 'a', j = 0;

	while (j < 10)
	{
		for (i = 'a'; i < 123; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		j++;
	}
}
