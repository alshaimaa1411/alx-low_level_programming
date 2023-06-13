#include "main.h"
#include<stdio.h>

/**
 * main - program that multiplies two numbers
 * @argc: numb of arg.
 * @argv: array of arg.
 *
 * Return: 1.
 */

int main(int argc, char *argv[])
{
	int x;
	int y;

	if (argc == 3)
	{
	x = _atoi(argv[1]);
	y = _atoi(argv[2]);
	printf("%d\n", x * y);
	return (0);
}
else
{
	printf("Error\n");
return (1);
}
}
