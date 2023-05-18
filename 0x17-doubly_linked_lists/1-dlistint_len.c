#include "lists.h"

/**
 * dlistint_len - return number of elements in dlistint_t list
 * @h: pointer of type list_t
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
