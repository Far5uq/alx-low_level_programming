#include "main.h"

/**
 * *_memcpy - prints mem. area
 * @*dest: the address of memory to print
 * @*src: the size of the memory to print
 * @n: what to print
 *
 * Return: Nothing.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
char *original_dest = dest;
unsigned int i;
for (i = 0; i < n; i++)
{
*dest++ = *src++;
}
return (original_dest);
}
