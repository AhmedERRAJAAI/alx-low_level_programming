#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - print given name using pointer func
 *
 * @name: char *
 * @f: function used to print name
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		(*f)(name);
	}

}
