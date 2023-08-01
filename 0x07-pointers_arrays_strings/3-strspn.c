#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 * @s: initial segment
 * @accept: bytes
 *
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
unsigned int length = 0;
int found;
char *a;
while (*s != '\0')
{
found = 0;
a = accept;
while (*a != '\0')
{
if (*s == *a)
{
found = 1;
break;
}
a++;
}
if (!found)
{
return (length);
}
length++;
s++;
}
return (length);
}
