#include "main.h"
#include <string.h>

/**
 * *_strncat - function that concatenates two strings
 * @*dest: pointer 1
 * @*src: pointer 2
 * @n: pointer 3
 *
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
int len = strlen(dest);
int c;
for (c = 0 ; c < n && *src != '\0' ; c++)
{
dest[len + 1] = src[c];
src++;
}
dest[len + 1] = '\0';
return (dest);
}
