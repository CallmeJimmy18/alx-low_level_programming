#include "main.h"
/**
 * _memcpy - copies the string to dest
 * @deest: this is the destination
 * @src: this is the source
 * @n: this is the number of bytes
 * Return: this will return the dest string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;
int j = n;
for (i = 0; i < j; i++)
{
dest[i] = src[i];
}
return (dest);
}
