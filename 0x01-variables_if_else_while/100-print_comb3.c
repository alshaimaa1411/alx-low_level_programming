#include <stdio.h>
/**
 * main - Prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
int x, y;

for (x = 48 ; x < 58 ; x++)
{
for (y = 49 ; y < 58 ; y++)
{
if ((x == y) || (x > y))
{
continue;
}
else
{
putchar(x);
putchar(y);
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
