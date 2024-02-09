#include <main.h>
/**
 * print_binary - print binary representation of a number
 * @n: decimal number to print as binary
 */
void print_binary(unsigned long int n)
{
if (n == 0)
{
printf("0");
return;
}
/* Recursively print the binary representation of n/2 */
print_binary(n >> 1);
/* Print the least significant bit of n */
printf("%d", n & 1);
}
