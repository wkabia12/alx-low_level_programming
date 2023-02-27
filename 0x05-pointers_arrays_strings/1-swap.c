#include "main.h"

/**
 * swap_int - swaps integer values
 * @a: Pointer argument
 * @b: Pointer argument
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
