#include "hash_tables.h"

/**
 * shash_table_create - creates a hash table
 * @size: size of the array of linked list in the table
 *
 * Return: shash_table_t struct
 */
shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *ht;
    unsigned long int i;

    if (size == 0)
        return (NULL);

    ht = malloc(sizeof(shash_table_t));
    if (ht == NULL)
        return (NULL);

    ht->size = size;
    ht->array = malloc(sizeof(shash_node_t *) * size);
    if (ht->array == NULL)
    {
        free(ht);
        return (NULL);
    }

    for (i = 0; i < size; i++)
    {
        ht->array[i] = NULL;
    }

    ht->shead = NULL;
    ht->stail = NULL;

    return (ht);
}


/**
 * shash_table_set - adds an element to the hash table
 * @ht: hash table to add the element to
 * @key: key of the element, will give the index in the array
 * @value: value of the element to store in the array
 *
 * Return: 1 on success, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    shash_node_t *new_node, *current;

    if (ht == NULL || key == NULL || value == NULL)
        return (0);

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

    new_node->next = NULL;

    if (ht->shead == NULL || strcmp(key, ht->shead->key) < 0)
    {
        new_node->sprev = NULL;
        new_node->snext = ht->shead;
        if (ht->shead != NULL)
            ht->shead->sprev = new_node;
        ht->shead = new_node;
        if (ht->stail == NULL)
            ht->stail = new_node;
        return (1);
    }

    current = ht->shead;
    while (current->snext != NULL && strcmp(key, current->snext->key) >= 0)
        current = current->snext;

    new_node->sprev = current;
    new_node->snext = current->snext;
    if (current->snext != NULL)
        current->snext->sprev = new_node;
    current->snext = new_node;
    if (new_node->snext == NULL)
        ht->stail = new_node;

    return (1);
}

/**
 * insert_sort - inserts a node in a sorted doubly
 * linked list
 * @node: shash_node_t to insert
 * @ht: pointer to the hash table to insert it into
 */
void insert_sort(shash_node_t *node, shash_table_t *ht)
{
	shash_node_t *head = ht->shead;

	if (!head || strcmp(node->key, head->key) < 0)
	{
		ht->shead = node;
		if (!head)
			ht->stail = node;
		else
		{
			node->snext = head;
			head->sprev = node;
		}
		return;
	}

	while (head->snext && strcmp(node->key, head->snext->key) >= 0)
		head = head->snext;

	node->sprev = head;
	if (!head->snext)
		ht->stail = node;
	else
		head->snext->sprev = node;
	node->snext = head->snext;
	head->snext = node;
}
/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key of the value to retrieve
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
    shash_node_t *current;

    if (ht == NULL || key == NULL)
        return (NULL);

    current = ht->shead;
    while (current != NULL)
    {
        if (strcmp(key, current->key) == 0)
            return (current->value);
        current = current->snext;
    }

    return (NULL);
}


/**
 * shash_table_print - prints a hash table
 * @ht: hash table to print
 */
void shash_table_print(const shash_table_t *ht)
{
    shash_node_t *current;
    int comma_flag = 0;

    if (ht == NULL)
        return;

    printf("{");
    current = ht->shead;
    while (current != NULL)
    {
        if (comma_flag)
            printf(", ");
        printf("'%s': '%s'", current->key, current->value);
        comma_flag = 1;
        current = current->snext;
    }
    printf("}\n");
}

/**
 * shash_table_print_rev - prints a hash table in reverse
 * @ht: hash table to print
 */
void shash_table_print_rev(const shash_table_t *ht)
{
    shash_node_t *current;
    int comma_flag = 0;

    if (ht == NULL)
        return;

    printf("{");
    current = ht->stail;
    while (current != NULL)
    {
        if (comma_flag)
            printf(", ");
        printf("'%s': '%s'", current->key, current->value);
        comma_flag = 1;
        current = current->sprev;
    }
    printf("}\n");
}

/**
 * shash_table_delete - deletes a hash table
 * @ht: hash table to be deleted
 */
void shash_table_delete(shash_table_t *ht)
{
	if (!ht)
		return;

	free_list_s(ht->shead);
	free(ht->array);
	free(ht);
}