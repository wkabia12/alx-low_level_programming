#include "lists.h"

/**
 * add_nodeint - adds new node at begging of list_t list
 * @head: pointer to pointer of next node
 * @n: value for the str element
 * Return: number of nodes
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_nodeint = malloc(sizeof(listint_t));

	if (add_nodeint == NULL)
	{
		free(add_nodeint);
		return (NULL);
	}
	add_nodeint->n = n;
	add_nodeint->next = *head;
	*head = add_nodeint;

	return (*head);
}
