#include "lists.h"

/**
 * add_dnodeint - adds new node at begging of dlistint_t list
 * @head: pointer to pointer of next node
 * @n: value for the n element
 * Return: number of nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *add_node = malloc(sizeof(dlistint_t));

	if (add_node == NULL)
	{
		free(add_node);
		return (NULL);
	}
	add_node->n = n;
	add_node->prev = NULL;
	add_node->next = *head;
	*head = add_node;

	return (*head);
}
