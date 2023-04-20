#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
va_list all;
char *s, *sp = "";
unsigned int i = 0;
va_start(all, format);
while (format[i] != '\0')
{
switch (format[i])
{
case 'c':
printf("%s%c", sp, va_arg(all, int));
break;
case 'i':
printf("%s%d", sp, va_arg(all, int));
break;
case 'f':
printf("%s%f", sp, va_arg(all, double));
break;
case 's':
s = va_arg(all, char *);
if (s == NULL)
{
printf("(nil)");
}
printf("%s%s", sp, s);
break;
default:
i++;
continue;
}
sp = ", ";
i++;
}
printf("\n");
va_end(all);
}
