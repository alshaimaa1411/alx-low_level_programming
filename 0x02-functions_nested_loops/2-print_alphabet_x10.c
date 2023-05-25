#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 -  _putchar the alphabet
 * main - print the function 10 times
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
char x;
int z;

for (z = 0; z <= 9; z++)
{
for (x = 'a'; x <= 'z'; x++)
_putchar(x);
_putchar('\n');
}
}
