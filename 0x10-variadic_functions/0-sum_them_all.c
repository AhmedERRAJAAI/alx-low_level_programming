#include <stdarg.h>


/**
 * sum_them_all - sum all agrs
 *
 * @n: number of args passed
 * @...: int args
 * Return: The sum of args
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	va_list args;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}
	va_start(args, n);
	sum = 0
	for (i = 0; i < n; i++)
	{
		int value = va_arg(args, int);
		sum =+ value;
	}

	va_end(args);
	return sum;
}
