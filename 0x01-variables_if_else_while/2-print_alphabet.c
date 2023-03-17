#include <stdio.h>
/**
 *
 *main - alphabet
 *
 *return - 0 (success)
 *
 */
int main(void)
{
char alph[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i < 26; i++)
{
putchar(alph[i]);
}
putchar('\n');
return 0;
}
