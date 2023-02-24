#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_numbers - prints the numbers from 0 - 9
 *
 * Return: Always 0.
**/

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
