#include "main.h"

/**
 * print_binary - print binary rep of decimal
 * @n: decimal number
 * @index: index of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int temp = 0;

	if (n == 0 && index == 0)
		return (0);
	if (n == 0 && index != 0)
		return (-1);

	temp = n >> index;
	if(temp & 1)
		return (1);
	else
		return (0);

}
