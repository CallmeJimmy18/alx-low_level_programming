#include "main.h"
#include <stdio.h>
/**                                                                                                                                                                   
 * _strlen - gets the length of the string                                                                                                                            
 * @s: this is the string                                                                                                                                             
 * Return: returns the lenght of the string                                                                                                                           
 */
int _strlen(char *s)
{
int i = 0;
while (*s != '\0')
{
i++;
s++;
}
return (i);
}
