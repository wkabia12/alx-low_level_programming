#include "lists.h"

/**
 * pop_listint - pops top most element and returns value
 * @head: pointer to pointer of next node
 * Return: value of poped node
 */
int pop_listint(listint_t **head)
{
	int pop;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	temp = *head;
	pop = temp->n;
	*head = temp->next;
	free(temp);

	return (pop);
}
