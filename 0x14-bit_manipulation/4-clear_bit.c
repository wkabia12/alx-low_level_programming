#include "main.h"

/**
 * clear_bit - set bit to 0 at specified index
 * @n: decimal number
 * @index: index of bit
 * Return: 1 or -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp = 1;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	temp <<= index;
	temp = *n ^ temp;
	*n = *n & temp;
	return (1);
}
