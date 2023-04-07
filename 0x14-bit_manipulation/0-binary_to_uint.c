#include "main.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: pointing to a string
 *
 * Return: the converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int cnvt = 0;
	int k = 0;

	if (!b)
	{
		return (0);
	}

	while (b[k] != '\0')
	{
		if (b[k] != '0' && b[k] != '1')
		{
			return (0);

		}

		cnvt <<= 1;

		cnvt += (b[k] - '0');

		k++;
	}

	return (cnvt);
}
