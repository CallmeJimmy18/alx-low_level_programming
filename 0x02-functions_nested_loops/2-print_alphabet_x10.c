#include "main.h"
/**
 * print_alphabet_x10 - nested for loop
 *
 */
void print_alphabet_x10(void)
{
int i;
int j;
char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
for (i = 0; i < 10; i++)
{
for (j = 0; j < 26; j++)
{
_putchar(alpha[j]);
}
_putchar('\n');
}
}
