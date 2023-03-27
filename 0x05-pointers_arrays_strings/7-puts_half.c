#include "main.h"
/**
 * puts_half - prints second have of string
 * @str: string to be split
 */
void puts_half(char *str)
{
int i = 0;
int j;
char *c = str;
while (*c != '\0')
{
c++;
i++;
}
for (j = 0; j < i; j++)
{
if (j == i / 2)
{
if (j % 2 != 0)
{
_putchar(str[(j / 2) - 1]);
}
else
{
_putchar(str[j]);
}
}
}
_putchar('\n');
}
