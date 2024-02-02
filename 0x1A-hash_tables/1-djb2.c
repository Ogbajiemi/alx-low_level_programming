#include "hash_tables.h"

/**
 * hash_djb2 - A Hash function that imp. the djb2 alg.
 * @str: The string to hash.
 *
 * Return: The calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hsh;
	int k;

	hsh = 5381;
	while ((k = *str++))
		hsh = ((hsh << 5) + hsh) + k; /* hsh * 33 + k */

	return (hsh);
}
