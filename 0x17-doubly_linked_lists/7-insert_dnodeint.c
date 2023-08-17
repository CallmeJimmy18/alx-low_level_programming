#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: this is a head pointer
 * @idx: is the index of the list where the new node should be added
 * @n: this is the element to be added
 * Return: the address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nw = malloc(sizeof(dlistint_t));
	dlistint_t *ptr1;
	dlistint_t *ptr2;
	unsigned int node_count = 0;

	nw->prev = NULL;
	nw->n = n;
	nw->next = NULL;
	ptr1 = *h;

	while (ptr1 != NULL)
	{
		ptr1 = ptr1->next;
		node_count++;
	}
	if (idx > 0 && idx <= node_count)
	{
		ptr1 = *h;
		while (idx != 1)
		{
			ptr1 = ptr1->next;
			idx--;
		}
		if (ptr1->next != NULL)
		{
			ptr2 = ptr1->next;
			ptr2->prev = nw;
			nw->prev = ptr1;
			nw->next = ptr2;
			ptr1->next = nw;
		}
		else
			nw = add_dnodeint_end(h, n);
	}
	else if (idx == 0)
		nw = add_dnodeint(h, n);
	return (nw);
}
