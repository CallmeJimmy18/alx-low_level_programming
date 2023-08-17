#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: this is the head pointer
 * @n: this is the element to add
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *nw = malloc(sizeof(dlistint_t));
	dlistint_t *h;

	if (nw == 0)
	{
		return (NULL);
	}
	nw->prev = NULL;
	nw->n = n;
	nw->next = NULL;
	h = *head;

	if (*head != NULL)
	{
		while (h->next != NULL)
		{
			h = h->next;
		}
		h->next = nw;
		nw->prev = h;
	}
	else
	{
		*head = nw;
	}
	return (nw);
}
