#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to be copied
 * Return: returns a pointer
 */
char *_strdup(char *str)
{
char *ptr;
int r = 0;
int i;
if (str == NULL)
{
return (NULL);
}
while (str[r] != '\0')
{
r++;
}
ptr = malloc(sizeof(char) * (r + 1));
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < r; i++)
{
ptr[i] = str[i];
}
return (ptr);
}
