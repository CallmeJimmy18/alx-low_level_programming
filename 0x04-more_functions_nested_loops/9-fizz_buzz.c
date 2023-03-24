#include <stdio.h>
/**
 * main - prints numbers 0 - 100
 * Return: returns 0
 */
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if ((i % 3) == 0)
{
printf("fizz");
printf(" ");
}
else if ((i % 5) == 0)
{
printf("Buzz");
printf(" ");
}
else if ((i % 3) == 0 && (i % 5) == 0)
{
printf("FizzBuzz");
printf(" ");
}
else
{
printf("%d", i);
printf(" ");
}
}
printf("\n");
}
