#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"

void print_int_char_float(char format, va_list args);
/**
 * print_all - print * params
 *
 * @format: args types
 * @...: args
 */
void print_all(const char * const format, ...)
{
	int i, find, n_length;
	va_list args;

	if (format != NULL)
	{
		va_start(args, format);
		i = 0, n_length = strlen(format);
		while (format[i])
		{
			find = 1;
			switch (format[i])
			{
				case 'c':
				case 'i':
				case 'f':
				case 's':
					print_int_char_float(format[i], args);
					break;
				default:
					find = 0;
					break;
			}
			i++;
			while (find == 1 && i != n_length)
			{
				printf(", ");
				break;
			}
		}
		va_end(args);
	}
	printf("\n");
}

/**
 * print_int_char_float - print int char and float
 *
 * @format: char
 * @args: va list
 */
void print_int_char_float(char format, va_list args)
{
	va_list args_cp;

	switch (format)
	{
		case 'c':
			printf("%c", va_arg(args, int));
			break;
		case 'i':
			printf("%d", va_arg(args, int));
			break;
		case 'f':
			printf("%f", va_arg(args, double));
			break;
		case 's':
			va_copy(args_cp, args);
			if ((void *)va_arg(args_cp, char *) == NULL)
			{
				printf("(nil)");
				va_arg(args, char *);
				break;
			} printf("%s", va_arg(args, char *));
			break;
		default:
			break;
	}
}
