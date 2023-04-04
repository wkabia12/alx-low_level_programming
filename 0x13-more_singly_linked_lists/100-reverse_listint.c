#include "lists.h"

/**
 * reverse_listint - reverse list
 * @head: pointer to pointer of next node
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp = NULL, *prev = NULL;

	while (*head != NULL)
	{
		temp = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		*head = temp;
	}
	*head = prev;
	return (*head);
}
