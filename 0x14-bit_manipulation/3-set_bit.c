#include <stdio.h>
#include "main.h"
/**
 * set_bit - sets the value of a bit to 1
 * @n: this is the number
 * @index: is the index, starting from 0
 * Return: 1 if it worked
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
{
return (-1);
}
*n = ((1 << index) | *n);
return (1);
}
