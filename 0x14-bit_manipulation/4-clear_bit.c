#include "main.h"

/**
 * clear_bit - Set the value of a bit to 0 at a given index
 * @n: pointer to the number to change
 * @index: index of the cleared bit
 *
 * Return: 1 if success -1 if it fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~(1UL << index);
	return (1);
}
