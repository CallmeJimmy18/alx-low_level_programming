#include <stdio.h>
#include "main.h"
/**
 * get_bit - returns the value of a bit
 * @n: this is the number
 * @index: is the index, starting from 0 of the bit
 * Return: the value of the bit at index index
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bit;
if (index > 63)
{
return (-1);
}
bit = (n >> index) & 1;
return (bit);
}
