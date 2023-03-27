#include "main.h"
/**
 * swap_int - swaps values of integers
 * @a: first value to be swapped
 * @b: second swap value
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
