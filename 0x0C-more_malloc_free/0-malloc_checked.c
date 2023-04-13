#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: this is the memory space 
 * Return: returns pointer to the allocated space 
 */
void *malloc_checked(unsigned int b)
{
  void *spc;

  spc = malloc(b);

  if (spc == NULL)
    {
      exit(98);
    }
  
  return (spc);
}
