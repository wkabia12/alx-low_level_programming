#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 *main - Prints out weather a random no is +ve,-ve or zero
 *Return: 0
 */
int main(void)
{
	int n;
	int rem;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	rem = n % 10;

	if (rem < 6 && rem != 0)
	{
		printf("Last digit of %d is %d and ", n, rem);
		printf("is less than 6 and not 0\n");
	}
	else if (rem > 5)
	{
		printf("Last digit of %d is %d and ", n, rem);
		printf("is greater than 5\n");
	}
	else if (rem == 0)
	{
		printf("Last digit of %d is %d and ", n, rem);
		printf("is 0\n");
	}
	return (0);
}
