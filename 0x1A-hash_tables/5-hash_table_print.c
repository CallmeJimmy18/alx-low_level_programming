#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: is the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *ptr;
	unsigned char com = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			if (com == 1)
				printf(", ");
			ptr = ht->array[i];
			while (ptr != NULL)
			{
				printf("'%s': '%s'", ptr->key, ptr->value);
				ptr = ptr->next;
			}
			com = 1;
		}
	}
	printf("}\n");
}
