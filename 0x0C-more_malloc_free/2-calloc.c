#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: the array
 * @size: the number of bytes
 * Return: returns a pointer to the allocated space
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(size * nmemb);
if (ptr == NULL)
{
return (NULL);
}
return (ptr);
}
