#include "main.h"
/**
 * malloc_checked - allocate memory using malloc, exit if it fails.
 * @b: The size of the memory block to be allocated.
 * Return: A pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
        void *Block;

        Block = malloc(b);
        if (Block == NULL)
                exit(98);
        return (Block);        
}
