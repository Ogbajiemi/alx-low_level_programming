#include "main.h"
#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer
 *
 * @n: the int to check
 *
 * Return: Always 0 (Success)
 *
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}
