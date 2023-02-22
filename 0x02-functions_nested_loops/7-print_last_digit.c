#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: the int to extract the last digit from
 *
 * Return: Always 0 (Success)
 *
 */

int print_last_digit(int n)
{
	int my_digit;

	if (n < 0)
		n = -n;

	my_digit = n % 10;

	if (my_digit < 0)
		my_digit = -my_digit;

	_putchar(my_digit + '0');

	return (my_digit);

}

