#include "function_pointers.h"

/**
 * array_iterator - executes function for every element in array
 * @array: contains elements to be printed
 * @size: size of array
 * @action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (action != NULL)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
		{
		action(array[i]);
		}
	}
}
