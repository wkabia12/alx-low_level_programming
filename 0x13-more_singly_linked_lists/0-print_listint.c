#include "lists.h"

/**
 * print_list - prints all elements of list_t list
 * @h: pointer of type list_t
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->n)
		{
			printf("%d\n", h->n);
			count++;
		}
		h = h->next;
	}
	return (count);
}
