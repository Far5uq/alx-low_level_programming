#include "main.h"
#include <stddef.h>

/**
 * *_strchr - locates character in a string
 * @s: pointer 1
 * @c: pointer 2
 *
 * Return: s or null 
 */

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
return (0);
}
