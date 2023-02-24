#include <stdio.h>

/**
 * main - prints numbers to 100 multples of 3-Fizz, 5-Buzz, both FizzBuzz
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 100; i++)
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
			printf("%i ", i);
		}
		if (i != 100)
			_printf(" ");
	}
	printf("\n");
	return (0);
}
