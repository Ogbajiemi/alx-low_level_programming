#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Main Entry
 * @b: input
 * Return: 0
 */

void *malloc_checked(unsigned int b)

{
	void *k;

	k = malloc(b);
	if (k == NULL)

		exit(98);

	return (k);

}
