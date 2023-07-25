#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - function that print string
 * @dest: pointer 1
 * @src: pointer 2
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
int c;
for (c = 0 ; src[c] != '\0' ; c++)
dest[c] = src[c];
dest[c] = '\0';
return (dest);
}
