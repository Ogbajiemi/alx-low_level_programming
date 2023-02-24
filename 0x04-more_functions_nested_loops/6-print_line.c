#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: number of times to print
 *
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int k;

		for (k = 1; k <= n; k++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
