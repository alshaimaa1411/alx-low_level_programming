#include "main.h"
/**
 * print_array - prints half of a string
 * @a: char to check
 * @n: num
 * Return: 0 is success
 */
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i == n - 1)
{
}
else
{
putchar(',');
putchar(' ');
}
}
printf("\n");
}
