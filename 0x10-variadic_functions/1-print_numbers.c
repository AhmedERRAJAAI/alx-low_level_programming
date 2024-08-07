#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers -  function that prints numbers, followed by a new line
 *
 * @separator: string used for printing
 * @n: number of args
 * @...: int args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
	va_list args;

	if (n != 0)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(args, int));
			if (i != (n - 1))
			{
				if (separator != NULL)
					printf("%s", separator);
			}
		}
		va_end(args);
	}
	printf("\n");
}
