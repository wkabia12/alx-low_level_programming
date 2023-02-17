#include <stdio.h>
/**
 * main - Return lowercase alphabet
 * Return: 0
 */
int main(void)
{
	char ch = 'a';
	int i = (int)ch;

	for (; i < 123; i++)
	{
		ch = (char)i;
		putchar(ch);
	}
	return (0);
}
