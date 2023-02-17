#include <stdio.h>
/**
 * main - Return lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char ch = 'z';
	int i = (int)ch;

	for (; i > 96; i--)
	{
		ch = (char)i;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
