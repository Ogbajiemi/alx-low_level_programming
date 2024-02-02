#include "hash_tables.h"

/**
 * key_index - A function which gives the index of a key
 *
 * Description: function that gives you the index of a key
 *
 * @key: the key to get idex
 * @size: the size of the array of the hash table
 *
 * Return: index at which the key/value pair should be stored in the array
 * of the hash table
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hsh_res;

	hsh_res = hash_djb2(key);
	if (size != 0)
		return (hsh_res % size);
	return (0);
}
