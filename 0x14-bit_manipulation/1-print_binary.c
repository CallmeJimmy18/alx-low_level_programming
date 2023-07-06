#include <stdio.h>
#include "main.h"
/**
 * print_binary - converts the number to binary
 * @n: is the number being converted
 */
void print_binary(unsigned long int n)
{
int i;
int c = 0;
unsigned long int num;
for (i = 63; i >= 0; i--)
{
num = n >> i;
if (num & 1)
{
_putchar('1');
c++;
}
else if (c)
{
_putchar('0');
}
}
if (!c)
{
_putchar('0');
}
}
