#include <stdio.h>
#include <stdarg.h>


/**
 * sum_them_all - returns the sum of any number of int given
 * @n: number of args passed
 *
 * Return: The sum of the two parameters
 * */

int sum_them_all(const unsigned int n, ...)
{
	if (n==0)
	{
		return 0;
	}
	int sum = 0;
	va_list args;
	va_start(args, n);
	for (int i=0; i<n; i++)
	{
		int value = va_arg(args, int);
		sum = sum + value;
	}

	va_end(args);
	return sum;
}
