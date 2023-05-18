#include "lists.h"

/**
 * add_dnodeint_end - adds new node at end of dlistint_t list
 * @head: pointer to pointer of next node
 * @n: value for the n element
 * Return: number of nodes
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *add_node;
	dlistint_t *temp;

	add_node = malloc(sizeof(dlistint_t));
	if (add_node == NULL)
	{
		free(add_node);
		return (NULL);
	}
	add_node->n = n;
	add_node->next = NULL;
	if (*head == NULL)
	{
		*head = add_node;
		add_node->prev = NULL;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = add_node;
		add_node->prev = temp;
	}

	return (add_node);
}
