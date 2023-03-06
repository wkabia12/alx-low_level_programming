#include "main.h"

/**
 * print_diagsums - prints sum of diagonals
 * @a: square matrix
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int i, rldiag_sum = 0, lrdiag_sum = 0;

	for (i = 0; i < size * size; i++)
	{
		if (i % (size + 1) == 0)
			lrdiag_sum += a[i];
		if (i % (size - 1) == 0 && i != 0 && i != (size * size - 1))
			rldiag_sum += a[i];
	}
	printf("%d, %d\n", lrdiag_sum, rldiag_sum);
}
