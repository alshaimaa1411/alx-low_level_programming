#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: char to check
 * Return: 0 is success
 */
void puts_half(char *str)
{
int len = strlen(str);
int i;
int n;

if (len % 2 != 0)
{
n = (len - 1) / 2;
}
else
{
n = len / 2;
}
for (i = 0; i <= n; i++)
{
char temp = str[i];
putchar(temp);
}
}
