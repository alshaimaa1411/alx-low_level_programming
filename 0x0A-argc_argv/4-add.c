#include<stdio.h>
#include<stdlib.h>
/**
 * main - sum argc.
 * @argc: all para.
 * @argv: arr of para.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
int x = 0;
char *c;

while (--argc)
{
for (c = argv[argc]; *c; c++)
if (*c < '0' || *c > '9')
return (printf("Error\n"), 1);
x += atoi(argv[argc]);
}
				printf("%d\n", x);
return (0);
}
