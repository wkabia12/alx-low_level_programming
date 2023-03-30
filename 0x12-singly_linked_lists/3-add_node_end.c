#include "lists.h"

/**
 * add_node_end - adds new node at begging of list_t list
 * @head: pointer to pointer of next node
 * @str: value for the str element
 * Return: number of nodes
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add_node;
	list_t *temp;

	add_node = malloc(sizeof(list_t));
	if (add_node == NULL)
	{
		free(add_node);
		return (NULL);
	}
	add_node->str = strdup(str);
	add_node->len = strlen(str);
	add_node->next = NULL;
	if (*head == NULL)
		*head = add_node;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = add_node;
	}

	return (add_node);
}
