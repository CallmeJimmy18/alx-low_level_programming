#include "main.h"
/**
 * _strchr - locates a character
 * @s: this is the string to be looked through
 * @c: this is the character being searched for in the string
 * Return: returns a pointer
 */
char *_strchr(char *s, char c)
{
int j;
for (j = 0; s[j] <= '\0'; j++)
{
if (s[j] == c)
{
return (&s[j]);
}
}
return (0);
}
