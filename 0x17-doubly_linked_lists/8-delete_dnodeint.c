#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index index of a dlistint_t linked list
 * @index: the index of the node that should be deleted
 * @head: the head pointer
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr1;
	dlistint_t *ptr2;

	if (*head == NULL)
		return (-1);
	ptr1 = *head;
	while (ptr1 != NULL)
	{
		if (index == 0)
		{
			*head = ptr1->next;
			(*head)->prev = NULL;
			free(ptr1);
			return (1);
		}
		while (index > 1)
		{
			ptr1 = ptr1->next;
			index--;
		}
		if (ptr1->next == NULL)
		{
			ptr2 = ptr1->prev;
			free(ptr1);
			ptr2->next = NULL;
			return (1);
		}
		else
		{
			ptr2 = ptr1->prev;
			ptr2->next = ptr1->next;
			ptr1->next->prev = ptr2;
			free(ptr1);
			return (1);
		}
		ptr2 = ptr1;
		ptr1 = ptr1->next;
	}
	return (-1);
}
