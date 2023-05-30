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
if (n <= 98)
{
for (n = n; n <= 98; n++)
{
if (n == 98)
break;
printf("%d ,",n);
}
}
if (n >= 98)
{
for (n = n; n <= 98; n--)
{
if (n == 98)
break;
printf("%d ,", n);
}
}
}
