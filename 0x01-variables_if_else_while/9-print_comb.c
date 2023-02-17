#include <stdio.h>
/**
 * main - prints all combos of single digit numbers
 * Return: 0
 */
int main(void)
{
	int i = '0';

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i == '9')
		{
		putchar('\n');
		break;
		}
		putchar(',');
		putchar(' ');
	}
	return (0);
}
