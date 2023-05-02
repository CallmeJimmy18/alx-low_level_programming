#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: this is the head
 * Return: this returns the length
 */
size_t listint_len(const listint_t *h)
{
int len = 0;
while (h != NULL)
{
len++;
h = h->next;
}
return (len);
}
