#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *tmp = head;
listint_t *nw = malloc(sizeof(listint_t));
if (nw == NULL)
{
return (NULL);
}
nw->n = n;
nw->next = NULL;
idx--;
while (idx != 1)
{
tmp = tmp->next;
idx--;
}
nw->next = tmp->next;
tmp->next = nw;
return (nw);
}
