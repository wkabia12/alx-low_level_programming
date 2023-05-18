#include "lists.h"

/**
 * get_dnodeint_at_index - finds nth element and returns value
 * @head: head pointer
 * @index: index to be searched
 * Return: value of nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);

	temp = head;
	while (temp && count < index)
	{
		temp = temp->next;
		count++;
	}
	if (temp != NULL)
		return (temp);
	else
		return (NULL);

}
