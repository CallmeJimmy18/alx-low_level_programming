#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value
 * @key: is the key
 * @value: he value associated with the key
 * Return: 1 if it succeeded
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *nw;
	char *cp_value;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	cp_value = strdup(value);
	if (cp_value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = cp_value;
			return (1);
		}
	}
	nw = malloc(sizeof(hash_node_t));
	if (nw == NULL)
	{
		free(cp_value);
		return (0);
	}
	nw->key = strdup(key);
	if (nw->key == NULL)
	{
		free(nw);
		return (0);
	}
	nw->value = cp_value;
	nw->next = ht->array[index];
	ht->array[index] = nw;

	return (1);
}
