#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: bytes to be allocated
 * Return: pointer to memory allocated
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		free(ptr);
		exit(98);
	}
	return (ptr);
}
