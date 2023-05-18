#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts nth element and returns it's address
 * @h: head pointer
 * @idx: index to be inserted
 * @n: value of new node
 * Return: address of inserted node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *temp, *temp2, *ins_node;

	if (h == NULL)
		return (NULL);

	temp = (*h);
	temp2 = NULL;
	while (temp && count < idx)
	{
		temp2 = temp;
		temp = temp->next;
		count++;
	}
	if (count < idx)
		return (NULL);

	ins_node = malloc(sizeof(dlistint_t));
	if (ins_node == NULL)
	{
		free(ins_node);
		return (NULL);
	}

	ins_node->n = n;
	ins_node->next = temp;
	if (temp)
		temp->prev = ins_node;
	temp2->next = ins_node;
	ins_node->prev = temp2;
	return (ins_node);
}
