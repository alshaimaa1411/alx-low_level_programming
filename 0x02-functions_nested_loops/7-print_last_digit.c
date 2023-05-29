#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number.
 *
 * @x: takes in integer type input for function
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int x)
{
int z;
if (x < 0)
z = -1 * (x % 10);
else
z = x % 10;
_putchar(z + '0');
return (z);
}
