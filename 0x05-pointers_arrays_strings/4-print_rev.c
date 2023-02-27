#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 *
 * @s: string to be printed
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int q;
	int p;
	int len;

	q = 0;

	while (s[q] != '\0')
	{
		q++;
	}

	len = q;

	for (p = len - 1; p >= 0; p--)
	{
		_putchar(s[p]);
	}

	_putchar('\n');
}
