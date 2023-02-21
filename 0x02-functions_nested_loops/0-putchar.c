#include "main.h"

/**
 * main - Prints putchar
 * Return: 0
 */
int main()
{
	char word[] = "_putchar";
	int i = 0;

	for (i =0; i < (int)sizeof(word); i++)
	{
		_putchar(word[i]);

	}
	_putchar('\n');
	return (0);
}
