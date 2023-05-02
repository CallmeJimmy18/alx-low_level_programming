#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *tmp, *nw;
tmp = *head;
nw = (listint_t *)malloc(sizeof(listint_t));
if (nw == NULL)
{
return (NULL);
}
nw->n = n;
nw->next = NULL;
if (*head == NULL)
{
*head = nw;
return (nw);
}
while (tmp->next != NULL)
{
tmp = tmp->next;
}
tmp->next = nw;
return (nw);
}
