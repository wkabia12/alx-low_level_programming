#include "main.h"

/**
 * print_alphabet - print lowercase alphabet
 * Return: 0
 */
void print_alphabet(void)
{
	int i = 'a';
	for (i = 'a'; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
