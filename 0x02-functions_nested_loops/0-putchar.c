#include "main.h"

/**
 * pchar - Prints _putchar
 * Return: 0
 */
int pchar(void)
{
	char word[] = "_putchar";
	int i = 0;

	for (i = 0; i < (int)sizeof(word); i++)
	{
		_putchar(word[i]);

	}
	_putchar('\n');
	return (0);
}
