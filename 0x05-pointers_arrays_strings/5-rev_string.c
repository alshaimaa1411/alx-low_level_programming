#include "main.h"
/**
 * rev_string -> printing a string in reverse
 * @s: the string to be printed in rev
 */
void rev_string(char *s)
{
int len = strlen(s);
int i;

for (i = 0; i < len / 2; i++)
{
char temp = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = temp;
}
}
