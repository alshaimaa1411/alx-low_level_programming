#include "main.h"
/**
 * puts2- prints half of a string
 * @str: char to check
 * Return: 0 is success
 */

void puts2(char *str)
{
int i = 0;
int x = strlen(str);
for (i = 0; i < x; i++)
{
if (i % 2 != 0)
{
continue;
}
else
{
char temp = str[i];
putchar(temp);
putchar('\n');
}
}
}
