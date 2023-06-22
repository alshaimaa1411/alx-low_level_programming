#include<stdarg.h>
#include<stdio.h>

/**
 * print_numbers - print num.
 * @separator: is the string to be printed between numbers.
 * @n: num of int.
 *
 * Return: no return.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i, a;
va_list p;
int x;

va_start(p, n);
for (i = 0; i < n; i++)
{
x = va_arg(p, int);
printf("%d", x);
if (separator != NULL && i < n - 1)

printf("%c", *separator);
}
va_end(p);
printf("\n");
}
