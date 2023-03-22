#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - return index place if comparison = true, else -1
 * @array: array
 * @size: size of elements in array
 * @cmp: pointer to func of one of the 3 in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int p;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);

	for (p = 0; p < size; p++)
	{
		if (cmp(array[p]) != 0)
			return (p);
	}
	return (-1);
}
