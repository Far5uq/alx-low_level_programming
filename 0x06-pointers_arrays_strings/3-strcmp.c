#include "main.h"
#include <stdio.h>

/**
 * _strcmp - functions that compares two string
 * @s1: string 1
 * @s2: string 2
 *
 * Return: dest
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2)
{
if (*s1 != *s2)
{
return (*s1 - *s2);
}
s1++;
s2++;
}
return (*s1 - *s2);
}
