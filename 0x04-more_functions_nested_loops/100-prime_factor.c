#include "main.h"

/**
 * prime_factor - prints largest prime factor
 */
void prime_factor(void)
{
	long int n = 612852475143;
	int i = 3;

	for (; i < sqrt(n); i + 2)
	{
		if (n % i == 0)
		{
			n /= i;
		}
	}
	printf("%ld/n");
}
