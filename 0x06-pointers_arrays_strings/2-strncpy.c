#include "main.h"
/**
 * _strncpy - Copies n charcters of string
 * @dest: string copied into this
 * @src: string copied into dest
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
while (dest[j] < n)
{
dest[j] = '\0';
j++;
}
return (dest);
}
