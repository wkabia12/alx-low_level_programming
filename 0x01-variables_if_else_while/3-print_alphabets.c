#include <stdio.h>
/**
 * main - Return lower and upper case alphabet
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
	for (; k < 91; k++)
	{
		chU = (char)k;
		putchar(chU);
	}
	putchar('\n');
	return (0);
}
