#include "main.h"
/**
 * reverse_array - reverses the array
 * @a: this is the array
 * @n: this is the size of the array
 */
void reverse_array(int *a, int n)
{
int i;
int j;
for (i = 0; i < n--; i++)
{
j = a[i];
a[i] = a[n];
a[n] = j;
}
}
