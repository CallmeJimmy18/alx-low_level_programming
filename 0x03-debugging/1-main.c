#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
int i;
printf("Infinite loop incoming :(\n");
i = 0;
while (i < 10) /* i is not incremementing so it stays smaller than 10 thus loop doesnt stop */
{
putchar(i); /* keeps printing here */
}
printf("Infinite loop avoided! \\o/\n");
return (0);
}
