#include "main.h"
/**
 * _islower - Checks if c is lowercase.
 * @c: is the char to be checked.
 * Return: 1 or 0.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
