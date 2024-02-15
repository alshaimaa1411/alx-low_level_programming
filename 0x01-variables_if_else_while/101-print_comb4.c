#include <stdio.h>
/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
int x, y, z;

for (x = 48 ; x < 58 ; x++)
{
for (y = 49 ; y < 58 ; y++)
{
for (z = 50 ; z < 58 ; z++)
{
if ((x > y) || (y > z) || (x > z) || (x == y) || (x == z) || (y == z))
{
continue;
}
putchar(x);
putchar(y);
putchar(z);
if (x == 55 && y == 56 && z == 57)
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
putchar('\n');
return (0);
}
