#include "function_pointers.h"
/**
 * int_index - searches for an integer.
 * @size: number of elements in the array.
 * @cmp:  pointer to the function to be used to compare values.
 * @array: arr pf para.
 * Return: eturns the index of the first element
 * for which the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
if (array == NULL || cmp == NULL)
{
return (-1);
}
for (int i = 0; i < size; i++)
{
if (cmp(array[i]) == 0)
{
return (-1);
}
else
{
return (i);
}
}
}
