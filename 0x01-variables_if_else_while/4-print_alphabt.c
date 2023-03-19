#include <stdio.h>
/**
 * main - Alphabet except q and e
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
char alpha[24] = "abcdfghijklmnoprstuvwxyz";
int i;
for (i = 0; i < 24; i++)
{
putchar(alpha[i]);
}
putchar('\n');
return (0);
}
