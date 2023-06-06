#include "main.h"
#include<stdio.h>
/**
 * _isdigit - function that checks for a digit btween 0 and 9.
 * @c: The character to be checked.
 *
 * Return: i if digit, o otherwise.
 */
int _isdigit(int c)
{
if (c >= 48 && c < 58)

return (1);
else
return (0);
}
