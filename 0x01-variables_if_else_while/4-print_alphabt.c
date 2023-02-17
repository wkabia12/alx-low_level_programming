#include <stdio.h>
/**
 * main - Return lowercase alphabet without q and e
 * Return: 0
 */
int main(void)
{
	char ch = 'a';
	int i = (int)ch;

	for (; i < 123; i++)
	{
		ch = (char)i;
		if (ch == 'q' || ch == 'e')
		{
			continue;
		}
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
