#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: head pointer
 * Return: returns number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int el_counter = 0;

	while (h != NULL)
	{
		h = h->next;
		el_counter++;
	}
	return (el_counter);
}
