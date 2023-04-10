#include "main.h"

/**
 * set_bit - get bit at specified index
 * @n: decimal number
 * @index: index of bit
 * Return: 1 or -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp = 0;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	temp = 1 << index;
	*n = *n | temp;
	return (1);
}
