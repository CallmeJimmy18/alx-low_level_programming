#include "lists.h"
/**
 * add_dnodeint -  adds a new node at the beginning
 * @head: head pointer
 * @n: the element to be added
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nw_ptr = malloc(sizeof(dlistint_t));
	dlistint_t *h;

	if (nw_ptr == 0)
		return (NULL);
	nw_ptr->prev = NULL;
	nw_ptr->n = n;
	h = *head;
	nw_ptr->next = h;

	if (h != NULL)
		h->prev = nw_ptr;
	*head = nw_ptr;

	return (nw_ptr);
}
