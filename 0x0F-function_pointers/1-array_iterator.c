#include "function_pointers.h"

/**
 * array_iterator - put para in arr.
 * @array: array to para.
 * @size: size of arra.
 * @action: pointer to fun.
 *
 * Return: no return.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (size != 0 && action != NULL)
		i = 0;
	while (i < size)
	{
		action(array[i]);
	i++;
	}
}
