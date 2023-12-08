#include "hash_tables.h"

/**
 * hash_table_create - function that create a hash table
 *  @size: size of array
 * 
 * Return: new hash table
*/

hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *nt;
    unsigned long int i;

    nt = malloc(sizeof(hash_node_t));

    if (nt == NULL)
    {
        return (NULL);
    }
    nt->size = size;

    nt->array = malloc(sizeof(hash_node_t *) * size);

    if (nt->array == NULL)
    {
        return (NULL);
    }

    for (i = 0; i < size; i++)
    {
        nt->array[i] = NULL;
    }
    return (nt);
}
