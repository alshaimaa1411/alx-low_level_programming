#include "main.h"
#include<stdio.h>
/**
 * print_numbers - print numbers from 0 to 9.
 *
 */

void print_numbers(void)
{
	int x;

	for (x = 48; x < 58; x++)
		_purchar(x);
			_putchar('\n');
}
