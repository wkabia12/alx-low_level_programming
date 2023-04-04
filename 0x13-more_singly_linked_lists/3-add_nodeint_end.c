#include "lists.h"

/**
 * add_nodeint_end - adds new node at begging of list_t list
 * @head: pointer to pointer of next node
 * @n: value for the n element
 * Return: number of nodes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_nodeint;
	listint_t *temp;

	add_nodeint = malloc(sizeof(listint_t));
	if (add_nodeint == NULL)
	{
		free(add_nodeint);
		return (NULL);
	}
	add_nodeint->n = n;
	add_nodeint->next = NULL;
	if (*head == NULL)
		*head = add_nodeint;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = add_nodeint;
	}

	return (add_nodeint);
}
