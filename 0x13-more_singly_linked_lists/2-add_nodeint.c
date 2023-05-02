#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: this is the head pointer
 * @n: this will be the new node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *nw = malloc(sizeof(listint_t));
if (nw == NULL)
{
return (NULL);
}
nw->n = n;
nw->next = NULL;
nw->next = (*head);
*head = nw;
return (*head);
}
