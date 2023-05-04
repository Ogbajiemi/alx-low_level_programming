#include "main.h"

/**
 * print_binary - this will print the binary rep of a num
 * @n: the num to be represented
 *
 * Return: 0
 */

void print_binary(unsigned long int n)
{
	int j = 63;
	int comput = 0;
	unsigned long int c;

	while (j >= 0)
	{
		c = n >> j;
		if (c & 1)
		{
			_putchar('1');
			comput++;
		}
		else if (comput)
		{
			_putchar('0');
		}
		j--;
	}
	if (!comput)
		_putchar('0');
}
