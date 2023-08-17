#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head pointer
 * @index: the index
 * Return: returns the nth node, NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node_count = 0;
	dlistint_t *ptr;

	ptr = head;
	while (ptr != NULL)
	{
		ptr = ptr->next;
		node_count++;
	}
	if (index < node_count)
	{
		ptr = head;
		while (index != 0)
		{
			ptr = ptr->next;
			index--;
		}
		return (ptr);
	}
	else
	{
		return (NULL);
	}
}
