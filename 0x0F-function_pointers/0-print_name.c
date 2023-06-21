#include"function_pointers.h"

/**
 * print_name - print name.
 * @*name: parameter to name.
 * (*f)(char *): pointer to fun.
 *
 * Return: no return.
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
	f(name);
}
