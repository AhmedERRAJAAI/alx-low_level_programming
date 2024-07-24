#include <stdlib.h>
#include <stdio.h>

/**
 * int_index - searches for an integer
 *
 * @array: elements array
 * @size: array length
 * @compaire: comparasion function
 * Return: index of result, if not -1
 */

int int_index(int *array, int size, int (*compaire)(int))
{
	int i;

	if (array == NULL || size <= 0 || compaire == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (compaire(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
