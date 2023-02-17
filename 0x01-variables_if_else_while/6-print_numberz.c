#include <stdio.h>
/**
 * main - prints 0-9 each on a new line
 * Return: 0
 */
int main(void)
{
	int i = '0';

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
