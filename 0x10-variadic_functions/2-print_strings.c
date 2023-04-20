#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings, followed by a new line.
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 * @...: the arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
unsigned int i;
char *s;
va_start(strings, n);
for (i = 0; i < n; i++)
{
s = va_arg(strings, char *);
if (separator != NULL && i != 0)
{
printf("%s", separator);
}
if (s == NULL)
{
printf("(nil)");
}
else
{
printf("%s", s);
}
}
printf("\n");
va_end(strings);
}
