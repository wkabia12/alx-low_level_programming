#include "lists.h"

/**
 * listint_len - return number of elements in list_t list
 * @h: pointer of type list_t
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
