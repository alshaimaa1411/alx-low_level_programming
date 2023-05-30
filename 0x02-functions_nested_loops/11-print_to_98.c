#include "main.h"
/**
 * print_to_98 - print n to 98 counts
 *           separated by comma, followed
 *           by space and number should be
 *           printed in order
 *
 * @n: input
*/

void print_to_98(int n)
{
int x;
if (n <= 98)
{
for (n = n; n <= 98; n++)
{
if (n == 98)
break;
_putchar(n + '0');
_putchar(',');
_putchar(' ');
}
}
if (n >= 98)
{
for (n = n; n <= 98; n--)
{
if (n == 98)
break;
_putchar(n + '0');
_putchar(',');
_putchar(' ');
}
}
return (0);
}
