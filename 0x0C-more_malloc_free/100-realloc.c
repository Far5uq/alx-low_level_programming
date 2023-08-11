#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_realloc - reallocate memory
 * @ptr: the pointer to the memory
 * @old_size: the address in size
 * @new_size: the size of the memory to print
 *
 * Return: Nothing.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
void *new_ptr;
size_t copy_size;
if (ptr == NULL)
{
return (malloc(new_size));
}
if (new_size == 0)
{
free(ptr);
return (NULL);
}
if (new_size == old_size)
{
return (ptr);
}
new_ptr = malloc(new_size);
if (new_ptr == NULL)
{
return (NULL);
}
copy_size = old_size < new_size ? old_size : new_size;
memcpy(new_ptr, ptr, copy_size);
free(ptr);
return (new_ptr);
}
