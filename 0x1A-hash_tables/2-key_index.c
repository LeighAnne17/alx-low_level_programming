#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index - Gets the index of a key in the hash table array
 * @key: The key
 * @size: The size of the array of the hash table
 *
 * Return: The index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    /* Calculate the hash value using hash_djb2 function */
    unsigned long int hash_value = hash_djb2(key);

    /* Calculate the index using modulo operation */
    unsigned long int index = hash_value % size;

    return (index);
}
