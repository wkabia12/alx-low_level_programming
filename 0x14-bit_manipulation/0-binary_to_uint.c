#include "main.h"

/**
 * binary_to_uint - converts from binary to decimal
 * @b: binary number
 * Return: converted unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;
	size_t count = 0;

	if (b == NULL)
		return (0);

	while (b[count] != '\0')
	{
		uint = ((uint << 1) | (b[count] - '0'));
		count++;
	}
	return (uint);
}
