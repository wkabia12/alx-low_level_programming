#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: min value allowed
 * @max: max value allowed
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *ptr, i, j = 0;

	if (min > max)
		return (NULL);

	ptr = calloc((max - min), sizeof(int));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = min; i <= max; i++)
	{
		ptr[j] = i;
		j++;
	}

	return (ptr);
}
