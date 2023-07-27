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
int len = strlen(dest);
int c;
for (c = 0 ; c < n && *src != '\0' ; c++)
{
dest[len] = *src;
src++;
len++;
}
dest[len] = '\0';
return (dest);
}
