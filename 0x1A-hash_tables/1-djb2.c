/**
 * hash_djb2 - Hash function that generates a djb2 hash key.
 * @str: Pointer to characters to hash.
 *
 * Return: The generated hash key.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash = 5381;
    int c;

    while ((c = *str++))
    {
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    }

    return (hash);
}
