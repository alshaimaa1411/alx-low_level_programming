#include "main.h"
#include<stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc: num of arg.
 * @argv: array of arg.
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
int i;

if (argc > 0)
{
while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
}
return (0);
}
