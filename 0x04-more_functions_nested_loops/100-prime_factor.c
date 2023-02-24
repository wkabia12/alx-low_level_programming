#include <stdio.h>
#include <math.h>

/**
 * main - prints largest prime factor
 * Return: 0 ok
 */
int main(void)
{
	long long n = 612852475143;
	long long lpf = 1;
	long long i;

	while (n % 2 == 0)
	{
		lpf = 2;
		n /= 2;
	}
	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			lpf = i;
			n /= i;
		}
	}
	if (n > 2)
		lpf = n;

	printf("%lld\n", lpf);
	return (0);
}
