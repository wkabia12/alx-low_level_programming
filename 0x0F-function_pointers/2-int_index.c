#include "function_pointers.h"

/**
 * int_index - executes function for every element in array
 * @array: contains elements to be printed
 * @size: size of array
 * @cmp: function pointer
 * Return: index of matched integer in array, -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
		return (-1);
	}
}
