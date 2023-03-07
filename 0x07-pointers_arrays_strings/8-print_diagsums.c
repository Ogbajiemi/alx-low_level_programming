#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 * @a: input
 * @size: input
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int num_sum1, num_sum2, k;

	num_sum1 = 0;
	num_sum2 = 0;

	for (k = 0; k < size; k++)
	{
		num_sum1 = num_sum1 + a[k * size + k];
	}

	for (k = size - 1; k >= 0; k--)
	{
		num_sum2 += a[k * size + (size - k - 1)];
	}

	printf("%d, %d\n", num_sum1, num_sum2);
}

