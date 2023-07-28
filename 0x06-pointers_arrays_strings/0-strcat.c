#include "main.h"

/**
 * *_strcat - function that concatenates two strings
 * @*dest: pointer 1
 * @*src: pointer 2
 *
 * Return: dest;
 */

char *_strcat(char *dest, char *src)
{
int dlen = 0;
int slen = 0;
while (dest[dlen] != '\0')
{
dlen++;
}
while (src[slen] != '\0')
{
dest[dlen] = src[slen];
dlen++;
slen++;
}
dest[dlen] = '\0';
return (dest);
}
