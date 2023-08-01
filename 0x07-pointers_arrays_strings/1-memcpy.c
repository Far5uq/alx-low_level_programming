#include "main.h"

/**
 * *_memcpy - copies bytes
 * @dest: pointer 1
 * @src: the bytes to be copied
 * @n: bytes
 *
 * Return: dest
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
