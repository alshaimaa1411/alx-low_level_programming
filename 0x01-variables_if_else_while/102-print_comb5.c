#include <stdio.h>
/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
int x, y;
int a, s;
for (a = 48 ; a < 58 ; a++)
{
for (s = 48 ; s < 58 ; s++)
{
if (a > s)
{
continue;
}
for (x = 48 ; x < 58 ; x++)
{
for (y = 49 ; y < 58 ; y++)
{
if ((x > y) || (s == x))
{
continue;
}
putchar(a);
putchar(s);
putchar(' ');
putchar(x);
putchar(y);
if (x == 57 && y == 57 && a == 57 && s == 56)
{
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
