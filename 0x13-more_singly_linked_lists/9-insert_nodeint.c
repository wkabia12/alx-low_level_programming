#include "lists.h"

/**
 * insert_nodeint_at_index - inserts nth element and returns it's address
 * @head: head pointer
 * @idx: index to be inserted
 * @n: value of new node
 * Return: address of inserted node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *temp, *temp2, *ins_node;

	if (head == NULL)
		return (NULL);

	temp = (*head);
	temp2 = NULL;
	while (temp && count < idx)
	{
		temp2 = temp;
		temp = temp->next;
		count++;
	}
	if (count < idx)
		return (NULL);

	ins_node = malloc(sizeof(listint_t));
	if (ins_node == NULL)
	{
		free(ins_node);
		return (NULL);
	}

	ins_node->n = n;
	ins_node->next = temp;
	temp2->next = ins_node;
	return (ins_node);
}
