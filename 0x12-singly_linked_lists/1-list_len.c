#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: this is the head pointer
 * Return: returns the number of elements
 */
size_t list_len(const list_t *h)
{
int number = 0;
while (h != NULL)
{
number++;
h = h->next;
}
return (number);
}
