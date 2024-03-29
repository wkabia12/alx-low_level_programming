#include "main.h"

/**
 * get_bit - get bit at specified index
 * @n: decimal number
 * @index: index of bit
 * Return: value of bit or -1 otherwise
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int temp = 0;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	if (n == 0)
		return (0);

	temp = n >> index;
	if (temp & 1)
		return (1);
	return (0);
}
