#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes nth element and returns 1 or -1
 * @head: head pointer
 * @index: index to be deleted
 * Return: address of inserted node
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp, *temp2;

	if (head == NULL)
		return (-1);

	temp = (*head);
	temp2 = NULL;
	while (temp && count < index)
	{
		temp2 = temp;
		temp = temp->next;
		count++;
	}
	if (count < index)
		return (-1);

	if (count == 0)
	{
		if (temp->next != NULL)
			temp->next->prev = NULL;
		*head = temp->next;
		free(temp);
	}
	else
	{
	if (temp->next == NULL)
	{
		temp2->next = NULL;
		free(temp);
	}
	else
	{
		temp2->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = temp2;
	}	free(temp);
	}
	return (1);
}
