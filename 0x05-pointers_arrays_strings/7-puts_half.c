#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: char to check
 * Return: 0 is success
 */
void puts_half(char *str)
{
int i = 0;
int x = strlen(str);
int n;
if (x % 2 != 0)
{
n = (x - 1) / 2;
}
else
{
n = x / 2;
}
for (i = n; i <= x; i++)
{
char temp = str[i];
putchar(str[i]);
}
putchar('\n');
}
