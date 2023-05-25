#include "main.h"
#include <stdio.h>
void print_alphabet(void)
{
	/*
	 * description print_alphabet : funcation print alphabet in lower case
	 * return : alphabe
	 */
	char x;

	for (x = 'a' ; x <= 'z' ; x++)
		_putchar(x);
}
int main(void)
{
	/*
	 * description main : the main funcation called other funcation
	 * return : 0
	 */
print_alphabet();
_putchar('\n');
return (0);
}
