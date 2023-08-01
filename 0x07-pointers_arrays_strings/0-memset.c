#include "main.h"

/**
 * *_memset - fills a memory with constant bytes
 * @s: pointer 1
 * @b: constant bytes
 * @n: bytes
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
