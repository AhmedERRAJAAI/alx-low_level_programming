#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - use pointer func to print given name
 *
 * @nm: char *
 * @f: print name
 */
void print_name(char *nm, void (*f)(char *))
{
	if (nm != NULL && f != NULL)
	{
		(*f)(nm);
	}

}
