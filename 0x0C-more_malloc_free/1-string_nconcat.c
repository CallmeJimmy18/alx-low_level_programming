#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *con;
unsigned int i = 0, j = 0, ab = 0, cd = 0;
while (s1 && s1[ab])
{
ab++;
}
while (s2 && s2[cd])
{
cd++;
}
if (n < cd)
{
con = malloc(sizeof(char) * (ab + n + 1));
}
else
{
con = malloc(sizeof(char) * (ab + cd + 1));
}
if (!con)
{
return (NULL);
}
while (i < ab)
{
con[i] = s1[i];
i++;
}
while (n < cd && i < (ab + n))
{
con[i++] = s2[j++];
}
while (n >= cd && i < (ab + cd))
{
con[i++] = s2[j++];
}
con[i] = '\0';
return (con);
}
