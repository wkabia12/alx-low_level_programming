#include "main.h"

/**
 * swap_int - resets number to 98
 * @a: Pointer argument
 * @b: Pointer argument
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
