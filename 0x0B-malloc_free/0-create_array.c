#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * @size: this is the memory allocation size
 * @c: the specific char
 * Return: returns 0 or 1
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *arr;
arr = malloc(sizeof(char) * size);
if (size == 0 || arr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
arr[i] = c;
}
return (arr);
}
