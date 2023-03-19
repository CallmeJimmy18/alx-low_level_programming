#include <stdio.h>
/**
 * main - hexidecimal
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int i;
int j;
char hex[6] = "abcdef";
for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
for (j = 0; j < 6; j++)
{
putchar(hex[j]);
}
putchar('\n');
return (0);
}
