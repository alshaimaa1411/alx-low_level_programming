#include "main.h"
/**
 * _isalpha - checks if character is a letter
 *            both lowercase or uppercase
 *
 * @c: takes input from other functions.
 *
 * Return: 1 is c if true else 0
*/

int _isalpha(int c)
{
if (c >= 65 && c <= 122)
	{
if (c >= 91 && c <= 96)
		{
return (0);
		}
else
		{
return (1);
		}
	}
else
		return (0);
}
