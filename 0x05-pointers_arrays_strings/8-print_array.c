#include "main.h"
#include <string.h>

/**
 * print_array - prints n array of integers
 * @a: array argument
 * @n: size of array argument
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
