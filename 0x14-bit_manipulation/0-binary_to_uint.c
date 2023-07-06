#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * binary_to_uint - converts a binary to decimal
 * @b: this is the number being converted
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
int i;
int dec = 0;
if (!b)
{
return (0);
}
for (i = 0; b[i]; i++)
{
if (b[i] < '0' || b[i] > '1')
{
return (0);
}
dec = (dec * 2) + (b[i] - '0');
}
return (dec);
}
