#include "main.h"
/**
 * _memset - stores a value for a variable
 * @s: this is the variable
 * @b: this is the character that will be added
 * @n: this is the number of bytes
 * Return: returns @s
 */
char *_memset(char *s, char b, unsigned int n)
{
int i;
for (i = 0; n > 0; i++)
{
s[i] = b;
n--;
}
return (s);
}
