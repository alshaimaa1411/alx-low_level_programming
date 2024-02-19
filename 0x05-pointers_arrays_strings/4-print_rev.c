#include "main.h"
/**
* print_rev -> printing a string in reverse
* @s: the string to be printed in rev
*/

void print_rev(char *s)
{
int i = strlen(s);

for (int x = i; x >= 0; x--)
{
putchar(s[x]);
}
putchar('\n');
}
