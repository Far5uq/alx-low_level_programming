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
int dlen;
int slen;
while (dest[dlen] != '\0')
destlen++;
for (slen = 0 ; src[slen] != '\0' ; slen++)
{
dest[dlen] = src[slen];
}
dest[dlen] = '\0';
return (dest);
}
