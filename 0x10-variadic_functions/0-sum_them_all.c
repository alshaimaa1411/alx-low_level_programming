/**
 * sum_them_all - sum of int.
 * @n: num of int in fun.
 *
 * Return: sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		int sum;

		va_list p;

		va_start(p, n);
		for (int i = 0; i < n; i++)
			sum += va_arg(p, int);
		va_end(p);
		return (sum);
	}
}
