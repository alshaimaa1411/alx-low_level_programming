#include"main.h"
#include <string.h>

/**
 * binary_to_uint - convert binary to decimal.
 * @b: cinst char.
 *
 * Return: number.
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int number = 0;
int power = 1;

if (b == NULL)
{
return (0);
}

for (int i = strlen(b) - 1; i >= 0; i--)
{
if (b[i] != '0' && b[i] != '1')
{
return (0);
}

number += power * (b[i] - '0');
power *= 2;
}

return (number);
}
