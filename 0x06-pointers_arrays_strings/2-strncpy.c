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

  i = 0;
  while (dest[i] != '\0')
    {
      i++;
    }
  for (j = 0; j < n; j++)
    {
      dest[j] = src[j];
    }
  return (dest);
}
  
