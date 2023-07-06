#include <stdio.h>
#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0
 * @n: the number
 * @index: is the index, starting from 0
 * Return: 1 if it worked
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
{
return (-1);
}
*n = (~(1 << index) & *n);
return (1);
}
