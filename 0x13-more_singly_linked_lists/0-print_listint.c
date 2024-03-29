#include "lists.h"

/**
 * print_listint - prints all elements of list_t list
 * @h: pointer of type list_t
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
