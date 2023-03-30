#include "lists.h"

/**
 * print_list - prints all elements of list_t list
 * @h: pointer of type list_t
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str)
		{
			printf("[%u] %s\n", h->len, h->str);
			count++;
		}
		else
		{
			printf("[%u] (nil)\n", h->len);
			count++;
		}
		h = h->next;
	}
	return (count);
}
