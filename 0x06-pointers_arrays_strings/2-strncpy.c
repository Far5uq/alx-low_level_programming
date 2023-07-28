 #include "main.h"

/**
 * *_strncpy - function that copies a code
 * @*dest: pointer 1
 * @*src: pointer 2
 * @n: pointer 3
 *
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
int c = 0;
while (c < n && src[c] != '\0')
{
dest[c] = src[c];
c++;
}
while (c < n)
{
dest[c] = '\0';
c++;
}
return (dest);
}
