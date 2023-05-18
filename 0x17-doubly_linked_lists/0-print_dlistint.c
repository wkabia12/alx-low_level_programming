#include "lists.h"

/**
 * print_dlistint - prints all elements of dlistint_t list
 * @h: pointer of type list_t
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->n >= 0 || h->n <= 0)
		{
			printf("%d\n", h->n);
			count++;
		}
		else
		{
			count++;
		}
		h = h->next;
	}
	return (count);
}
