#include "main.h"

/**
 * fizzBuzz - prints numbers to 100 multples of 3-Fizz, 5-Buzz, both FizzBuzz
 */
void fizzBuzz(void)
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
}
