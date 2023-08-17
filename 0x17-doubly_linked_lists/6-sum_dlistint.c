#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n)
 * @head: this is the head pointer
 * Return: returns the sum of all the data, 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;
	int total = 0;

	if (head == NULL)
	{
		return (0);
	}

	ptr = head;
	while (ptr != NULL)
	{
		total += ptr->n;
		ptr = ptr->next;
	}
	return (total);
}
