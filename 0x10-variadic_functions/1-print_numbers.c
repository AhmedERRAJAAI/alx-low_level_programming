#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers -  function that prints numbers, followed by a new line
 *
 * @n: number of args
 * @separator: string used for printing
 * @...: int args
 * Return: sum of args:int
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
				if (separator != NULL){
					printf("%s", separator);
				}
			}
		}
		va_end(args);
	}
	printf("\n");
}
