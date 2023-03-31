#include "main.h"
/**
 * _strncpy - Copies n charcters of string
 * @dest: string copied into this
 * @src: string copied into dest
 * @n: number of characters to be copied
 * Return: returns dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
int j;
for (j = 0; j < n && src[j] != '\0'; j++)
{
dest[j] = src[j];
}
while (j < n)
{
dest[j] = '\0';
j++;
}
return (dest);
}
