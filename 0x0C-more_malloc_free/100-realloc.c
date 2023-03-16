#include "main.h"

/**
 * _realloc - reallocates memory for an array
 * @ptr: ptr to be reallocated
 * @old_size: old size in bytes
 * @new_size: new size in bytes
 * Return: pointer to reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);

	ptr = realloc(ptr, new_size);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
