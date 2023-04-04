#include "lists.h"

/**
 * sum_listint - adds all elements and returns sum
 * @head: head pointer
 * Return: sum of the nodes
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

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
