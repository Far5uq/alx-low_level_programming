#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory
 * @b: memory re
 *
 * Return: Always 0.
 */

#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
{
exit (98);
}
return (ptr);
}
