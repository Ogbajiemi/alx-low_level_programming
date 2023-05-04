#include "main.h"

/**
 * binary_to_uint - To convert a binary to an unsigned int.
 * @b: this is a pointer to the strings of char
 *
 * Return: 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int mynum = 0;
	int l;

	if (!b)
		return (0);

	for (l = 0; b[l] != '\0'; ++l)
	{
		if (b[l] < '0' || b[l] > '1')
		{
			return (0);
		}

		mynum <<= 1;
		if (b[l] == '1')
		{
			mynum += 1;
		}

	}
	return (mynum);
}

