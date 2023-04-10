#include "main.h"
/**                                                                                                                                                                   
 * _strcat - concatinates the string                                                                                                                                  
 * @dest: other part of string to be appended here                                                                                                                    
 * @src: the string added to dest                                                                                                                                     
 * Return: returns dest                                                                                                                                               
 */
char *_strcat(char *dest, char *src)
{
int i;
int j;
i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
