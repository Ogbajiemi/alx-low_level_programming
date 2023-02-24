#include "main.h"

/**
 * print_triangle - Prints a triangle followed by  new line
 *
 * @size: size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int k;
	int i;

	if (size > 0)
		for (k = size; k > 0; k--)
		{
			for (i = 1; i <= size; i++)
				if (i >= k)
					_putchar('#');
				else
					_putchar(' ');
			_putchar('\n');
		}
	else
		_putchar('\n');
}

