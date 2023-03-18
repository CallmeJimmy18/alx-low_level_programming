#include <stdio.h>
/**
 * main - Uppercase and lowercase password
 *
 * Return: Always equal to 0 (Success)
 */
int main(void)
{
char ualph[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char lalph[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
int j;
for (i = 0; i < 26; i++)
{
putchar(lalph[i]);
}
for (j = 0; j < 26; j++)
{
putchar(ualph[j]);
}
putchar('\n');
return (0);
}
