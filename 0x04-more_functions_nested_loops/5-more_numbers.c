#include "main.h"
#include<stdio.h>
/**
 * more_numbers - print nums from o to 14 ten times.
 */
void more_numbers(void)
{
int x;
int y;

for (x = 0; x < 11; x++)
{
for (y = 0; y < 15; y++)
{
if (y > 9)
{
	_putchar((y / 10) + '0');
}
_putchar((y % 10) + '0');
}
_putchar('\n');
}
}
