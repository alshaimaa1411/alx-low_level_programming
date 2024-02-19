#include "main.h"
/**
* print_rev -> printing a string in reverse
* @s: the string to be printed in rev
*/

void print_rev(char *s)
{
int i = strlen(s);
int x;
for (x = i - 1; x >= 0; x--)
{
putchar(s[x]);
}
putchar('\n');
}
