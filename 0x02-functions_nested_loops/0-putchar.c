#include "main.h"

/**
 * main - Prints _putchar
 * Return: 0
 */
int main(void)
{
	char word[] = "_putchar";
	int i = 0;

	for (i = 0; i < (int)sizeof(word); i++)
	{
		_putchar(word[i]);
		if (i == 7)
		{
			_putchar('\n');
		}

	}
	return (0);
}
