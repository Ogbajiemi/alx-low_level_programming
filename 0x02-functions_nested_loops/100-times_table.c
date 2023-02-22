#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the times table of the input,
 *
 * @n: The value of the times table to be printed.
 *
 * Return: Always 0 (Success)
 *
 */

void print_times_table(int n)
{
	int p, q, k;

	if (n >= 0 && n <= 15)
	{
		for (p = 0; p <= n; p++)
		{
			_putchar('0');

			for (q = 1; q <= n; q++)
			{
				_putchar(',');
				_putchar(' ');

				k = p * q;

				if (k <= 99)
					_putchar(' ');
				if (k <= 9)
					_putchar(' ');

				if (k >= 100)
				{
					_putchar((k / 100) + '0');
					_putchar(((k / 10)) % 10 + '0');
				}
				else if (k <= 99 && k >= 10)
				{
					_putchar((k / 10) + '0');
				}
				_putchar((k % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
