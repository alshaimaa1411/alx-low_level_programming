#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
char x = "Last digit of";
char y = "is";
if (n > 5)
{ printf("%c", x, "%c", y, "%d", n, "and is greater than 5\n");
}
else if (n == 0)
{ printf("%c", x, "%c", y, "%d", n, "and is 0\n");
}
else
{ printf("%c", x, "%c", y, "%d", n, "and is less than 6 and not 0\n");
}
return (0);
}
