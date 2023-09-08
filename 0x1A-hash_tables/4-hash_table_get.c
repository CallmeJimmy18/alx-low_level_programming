#include "hash_tables.h"
/**
 * hash_table_get -  retrieves a value associated with a key
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Return: the value associated with the element
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ptr;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	ptr = ht->array[index];
	while (ptr && strcmp(ptr->key, key) != 0)
		ptr = ptr->next;

	return ((ptr == NULL) ? NULL : ptr->value);
}
