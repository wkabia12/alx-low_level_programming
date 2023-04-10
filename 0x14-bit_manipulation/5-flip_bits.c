#include "main.h"

/**
 * flip_bits - set bit to 0 at specified index
 * @n: 1st number
 * @m: 2nd number
 * Return: 1 or -1 otherwise
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int temp = 0;
	int count = 0;

	temp = n ^ m;
	while (temp > 0)
	{
		if (temp & 1)
			count++;
		temp >>= 1;
	}
	return (count);
}
