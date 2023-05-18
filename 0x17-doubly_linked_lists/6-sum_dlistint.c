#include "lists.h"

/**
 * sum_dlistint - adds all elements and returns sum
 * @head: head pointer
 * Return: sum of the nodes
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (0);

	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
