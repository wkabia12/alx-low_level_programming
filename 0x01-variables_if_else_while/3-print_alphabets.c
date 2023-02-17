#include <stdio.h>
/**
 * main - Return lowercase alphabet
 * Return: 0
 */
int main(void)
{
	char ch = 'a';
	char chU = 'A';
	int i = (int)ch;
	int k = (int)chU;

	for (; i < 123; i++)
	{
		ch = (char)i;
		putchar(ch);
	}
	for (; k < 123; k++)
	{
		chU = (char)k;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
