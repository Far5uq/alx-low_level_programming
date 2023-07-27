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
int destlen = 0;
int srclen = 0;
int c;
while (dest[c] != '\0')
destlen++;
for (c = 0 ; src[c] != '\0' ; c++)
{
dest[destlen + c] = src[c];
}
dest[deslen + c] = '\0';
return (dest);
}
