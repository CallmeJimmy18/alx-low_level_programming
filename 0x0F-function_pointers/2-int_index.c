#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index -  searches for an integer.
 * @array: this is the array
 * @size: this is the size of the array
 * @cmp: this is the pointer to the function
 * Return: returns 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (array == NULL || size <= 0 || cmp == NULL)
{
return (-1);
}
for (i = 0; i < size: i++)
{
if (cmp(array[i]))
{
return (i);
}
}
return (-1);
}
