#include "main.h"

/**
 * get_endianness - get endianess
 * Return: 0 big endian, 1 little endian
 */
int get_endianness(void)
{
	unsigned int e = 1;
	char *c = (char *)&e;

	if (*c)
		return (1);
	return (0);
}
