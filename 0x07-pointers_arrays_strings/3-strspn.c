#include "main.h"
/**
 * _strspn - sees how far the the two strings are equal
 * @s: this is the main string
 * @accept: these are the letters to be excluded
 * Return: returns the number of bytes 
 */
unsigned int _strspn(char *s, char *accept)
{
int n;
int i;
n = 0;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
n++;
break;
}
else if (accept[i + 1] == '\0')
{
return (n);
}
}
s++;
}
return (n);
}
