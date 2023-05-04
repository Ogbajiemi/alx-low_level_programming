#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index
 * @n: long int num to search
 * @index: index of the bit
 *
 * Return: the index bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int myValue;

	if (index > sizeof(n) * 8)
	{
		return (-1);
	}

	myValue = (n >> index) & 1;
	return (myValue);
}
