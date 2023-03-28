#include "main.h"
/**
 * _strcpy - copies the string
 * @dest: where the string will be copied to
 * @src: the copied string
 * Return: returns the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i, j;
j = 0;
while (*(src + j) != '\0')
{
j++;
}
for (i = 0; i <= j; i++)
{
dest[i] = src[i];
}
dest[j] = '\0';
return (dest);
}
