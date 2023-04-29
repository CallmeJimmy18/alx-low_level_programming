#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *nw;
list_t *temp = *head;
nw = (list_t *)malloc(sizeof(list_t));
unsigned int len = 0;
while (str[len])
len++;
if (nw == NULL)
{
return (NULL);
}
nw->str = strdup(str);
nw->len = len;
nw->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = nw;
return (nw);
}
