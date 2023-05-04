#include "main.h"

/**
 * get_endianness - This function checks the endianness
 *
 * Return: void
 */

int get_endianness(void)
{
	char *c;
	unsigned int i;

	c = (char *) &i;

	return (*c);
}
