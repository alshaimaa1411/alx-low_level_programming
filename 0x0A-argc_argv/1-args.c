#include "main.h"
#include<stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: num of arg.
 * @argv: array of arg
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
(void) argv;
printf("%d\n", argc - 1);
return (0);
}
