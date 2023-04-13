#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: starting point
 * @max: maximum number
 * Return: returns the pointer to the alloctaed space
 */
int *array_range(int min, int max)
{
int i;
int *iarr;
if (min > max)
{
return (NULL);
}
iarr = malloc(sizeof(int) * (max - min + 1));
if (iarr == NULL)
{
return (NULL);
}
for (i = 0; min <= max; i++)
{
iarr[i] = min++;
}
return (iarr);
}
