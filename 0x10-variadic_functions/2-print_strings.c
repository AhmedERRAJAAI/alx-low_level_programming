#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - print args (strs)
 *
 * @separator: separator (char)
 * @n: number of args
 * @...: args
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args, args_copy;
	char *tmp;

	if (n != 0)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			va_copy(args_copy, args);
			tmp = (void *)va_arg(args_copy, char*);
			if (tmp == NULL)
			{
				printf("(nil)");
				va_arg(args, char*);
			}
			else
			{
				printf("%s", va_arg(args, char*));
			}

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
