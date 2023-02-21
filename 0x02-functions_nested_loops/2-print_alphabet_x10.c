#include "main.h"

/**
 * main - print lowercase alphabet
 * Return: 0
 */
int main (void)
{
	int i = 0;
	while (i<10)
	{
		print_alphabet();
		_putchar('\n');
		i++;
	}
	return (0);
}
