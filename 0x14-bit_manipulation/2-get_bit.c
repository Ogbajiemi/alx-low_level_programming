#include "main.h"

/**
 * get_bit - return the value of a bit of an index
 * @n: number to search for
 * @index: index of the said bit
 *
 * Return: the value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int myBit;

	if (n == 0 || index > 63)
	{
		return (-1);
	}

	myBit = (n >> index) & 1;

	return (myBit);

}
