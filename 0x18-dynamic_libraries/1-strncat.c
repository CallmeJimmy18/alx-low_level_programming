#include "main.h"
/**                                                                                                                                                                   
 * _strncat - concatinates n bytes of the string                                                                                                                      
 * @dest: string will be appended here                                                                                                                                
 * @src: appended string                                                                                                                                              
 * @n: number of bytes                                                                                                                                                
 * Return: returns dest                                                                                                                                               
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
while (dest[i] != '\0')
{
i++;
}
for (j = 0; j < n && src[j] != '\0'; j++)
{
dest[i] = src[j];
i++;
}
dest[i] = '\0';
return (dest);
}
