#include <stdlib.h>
#include <time.h>
/**
* main - Entry code
* Description: prints "last digit"
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int x = n % 10;
if (x > 5)
{ printf("Last digit of %d is %d and is greater than 5\n", n, x);
}
else if (x == 0)
{ printf("Last digit of %d is %d and is 0\n", n, x);
}
else
{ printf("Last digit of %d is %d and is greater than 5\n", n, x);
}
return (0);
};
