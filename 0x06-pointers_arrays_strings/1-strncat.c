#include "main.h"

/**
 * *_strncat - function that concatenates two strings
 * @*dest: pointer 1
 * @*src: pointer 2
 * @n: pointer 3
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int c = 0;
while (dest[i] != '\0')
{
i++;
}
while (c < n && src[c] != '\0')
{
dest[i] = src[c];
i++;
c++;
}
dest[i] = '\0';
return (dest);
}
