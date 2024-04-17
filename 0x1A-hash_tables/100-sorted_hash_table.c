#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size of the array
 * Return: A pointer to the created hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *ht;
    unsigned long int i;

    ht = malloc(sizeof(shash_table_t));
    if (ht == NULL)
        return (NULL);

    ht->size = size;
    ht->array = malloc(size * sizeof(shash_node_t *));
    if (ht->array == NULL)
    {
        free(ht);
        return (NULL);
    }
    for (i = 0; i < size; i++)
        ht->array[i] = NULL;
    ht->shead = NULL;
    ht->stail = NULL;

    return (ht);
}

/**
 * shash_table_set - Adds an element to the sorted hash table
 * @ht: The hash table
 * @key: The key
 * @value: The value associated with the key
 * Return: 1 if successful, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    shash_node_t *new_node, *temp, *prev;

    if (ht == NULL || key == NULL || *key == '\0')
        return (0);

    index = key_index((unsigned char *)key, ht->size);
    temp = ht->array[index];
    while (temp != NULL)
    {
        if (strcmp(temp->key, key) == 0)
        {
            free(temp->value);
            temp->value = strdup(value);
            if (temp->value == NULL)
                return (0);
            return (1);
        }
        temp = temp->next;
    }

    new_node = malloc(sizeof(shash_node_t));
    if (new_node == NULL)
        return (0);

    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        free(new_node);
        return (0);
    }

    new_node->value = strdup(value);
    if (new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node);
        return (0);
    }

    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    /* Add node to the sorted linked list */
    if (ht->shead == NULL || strcmp(ht->shead->key, key) > 0)
    {
        new_node->sprev = NULL;
        new_node->snext = ht->shead;
        if (ht->shead != NULL)
            ht->shead->sprev = new_node;
        else
            ht->stail = new_node;
        ht->shead = new_node;
    }
    else
    {
        temp = ht->shead;
        while (temp->snext != NULL && strcmp(temp->snext->key, key) < 0)
            temp = temp->snext;
        new_node->sprev = temp;
        new_node->snext = temp->snext;
        if (temp->snext != NULL)
            temp->snext->sprev = new_node;
        else
            ht->stail = new_node;
        temp->snext = new_node;
    }

    return (1);
}

/**
 * shash_table_get - Retrieves a value associated with a key in the sorted hash table
 * @ht: The hash table
 * @key: The key
 * Return: The value associated with the key, or NULL if key couldn't be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
    unsigned long int index;
    shash_node_t *temp;

    if (ht == NULL || key == NULL || *key == '\0')
        return (NULL);

    index = key_index((unsigned char *)key, ht->size);
    temp = ht->array[index];
    while (temp != NULL)
    {
        if (strcmp(temp->key, key) == 0)
            return (temp->value);
        temp = temp->next;
    }

    return (NULL);
}

/**
 * shash_table_print - Prints a sorted hash table
 * @ht: The hash table
 */
void shash_table_print(const shash_table_t *ht)
{
    shash_node_t *temp;

    if (ht == NULL)
        return;

    printf("{");
    temp = ht->shead;
    while (temp != NULL)
    {
        printf("'%s': '%s'", temp->key, temp->value);
        if (temp->snext != NULL)
            printf(", ");
        temp = temp->snext;
    }
    printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order
 * @ht: The hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
    shash_node_t *temp;

    if (ht == NULL)
        return;

    printf("{");
    temp = ht->stail;
    while (temp != NULL)
    {
        printf("'%s': '%s'", temp->key, temp->value);
        if (temp->sprev != NULL)
            printf(", ");
        temp = temp->sprev;
    }
    printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table
 * @ht: The hash table
 */
void shash_table_delete(shash_table_t *ht)
{
    shash_node_t *temp, *next;
    unsigned long int i;

    if (ht == NULL)
        return;

    for (i = 0; i < ht->size; i++)
    {
        temp = ht->array[i];
        while (temp != NULL)
        {
            next = temp->next;
            free(temp->key);
            free(temp->value);
            free(temp);
            temp = next;
        }
    }

    free(ht->array);
    free(ht);
}
