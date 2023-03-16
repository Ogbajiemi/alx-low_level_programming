#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{
	int p;
	int q;
	int *a;

	if (min > max)
		return (NULL);
	q = max - min + 1;
	a = malloc(sizeof(int) * q);
	if (a == NULL)
		return (NULL);
	for (p = 0; p < q; p++, min++)
	{
		a[p] = min;
	}
	return (a);
}
