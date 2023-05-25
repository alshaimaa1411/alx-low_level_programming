#include "main.h"
#include <stdio.h>
/**
 * print_alphabet_x10 -  _putchar the alphabet
 * description main : print the function 10 times
 * retuen main 0
 */
void print_alphabet_x10(void)
{
char x;
for (x = 'a'; x <= 'z'; x++)
	_putchar(x);
_putchar('\n');
}
int main(void)
{
	print_alphabet_x10();
		print_alphabet_x10();
		print_alphabet_x10();
		print_alphabet_x10();
		print_alphabet_x10();
		print_alphabet_x10();
		print_alphabet_x10();
		print_alphabet_x10();
		print_alphabet_x10();
		print_alphabet_x10();
		return (0);
}
