#include "main.h"

/**
 * reverse_array - reverse a number array
 * @a: number array
 * @n: number or elements to swap
 */
void reverse_array(int *a, int n)
{
	int i = 0, j = n - 1, temp;

	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j--;
	}
}
