#include <stdio.h>

/**
 * main - prints numbers to 100 multples of 3-Fizz, 5-Buzz, both FizzBuzz
 * Return: 0
 */
int main(void)
{
	int i = 0;

	for (; i < 101; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	return (0);
}
