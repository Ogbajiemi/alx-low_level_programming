#include "main.h"

/**
 * get_endianness - to check the endianness
 *
 * Return: 0 if big endian, 1 if little
 *
 */

int get_endianness(void)
{
	int input = 1;

	return ((input >> 8) & 1);
}
