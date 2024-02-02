#include "hash_tables.h"

/**
 * hash_table_create - A Function that Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table_1;
	unsigned long int k;

	table_1 = malloc(sizeof(hash_table_t));
	if (table_1 == NULL)
		return (NULL);

	table_1->size = size;
	table_1->array = malloc(sizeof(hash_node_t *) * size);
	if (table_1->array == NULL)
		return (NULL);
	for (k = 0; k < size; k++)
		table_1->array[k] = NULL;

	return (table_1);
}
