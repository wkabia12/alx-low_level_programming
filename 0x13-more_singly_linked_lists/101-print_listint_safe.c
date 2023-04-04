#include "lists.h"

/**
 * print_listint_safe - prints all elements of list_t list safe mode
 * @head: pointer of type list_t
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	int count = 0;
	listint_t *fchk = NULL;

	fchk = head->next;
	while (head && fchk)
	{
		head = head->next;
		fchk = fchk->next;
		if (head == fchk)
		{
			return (count);
			exit(98);
		}

		printf("[%p]%d\n", (void *)head, head->n);
		count++;
	}
	return (count);
}
