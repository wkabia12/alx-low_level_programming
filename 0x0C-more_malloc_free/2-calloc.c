#include "main.h"

/**
 * _calloc - sets memory for an array
 * @nmemb: number of elements of size
 * @size: size in bytes
 * Return: pointer to new memory allocated
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = calloc(nmemb, size);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	return (ptr);
}
