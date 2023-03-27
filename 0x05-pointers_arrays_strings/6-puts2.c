#include "main.h"
/**
 * puts2 - prints the characters divisable by 2
 * @str: string to be printed
 */
void puts2(char *str)
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
if (j % 2 == 0)
{
_putchar(str[j]);
}
}
_putchar('\n');
}
