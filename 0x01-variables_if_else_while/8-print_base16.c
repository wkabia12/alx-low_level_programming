#include <stdio.h>
/**
 * main - prints base 16 numbers
 * Return: 0
 */
int main(void)
{
	char i = '0';
	char l = 'a';

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (l = 'a'; l <= 'g'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
