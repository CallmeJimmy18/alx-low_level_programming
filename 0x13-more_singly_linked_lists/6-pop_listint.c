#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - function that deletes the head node
 * @head: this is the head pointer
 * Return: the node data
 */
int pop_listint(listint_t **head)
{
int num;
listint_t *tmp;
if (!head || !*head)
{
return (0);
}
else
{
num = (*head)->n;
*tmp = (*head)->next;
free(*head);
*head = tmp;
}
return (num);
}
