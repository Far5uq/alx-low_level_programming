#include "main.h"

/**
 * wildcmp_helper - compares two strings
 * wildcmp - function
 * @s1: integer 1
 * @s2: integer 2
 *
 * Return: 1 if they are identical, 0 otherwise.
 */

int wildcmp_helper(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
{
return (1);
}
if (*s1 == *s2 || *s2 == '*')
{
return (wildcmp_helper(s1 + 1, s2 + 1));
}
if (*s2 == '*')
{
return (wildcmp_helper(s1, s2 + 1) || wildcmp_helper(s1 + 1, s2));
}
return (0);
}

int wildcmp(char *s1, char *s2)
{
return (wildcmp_helper(s1, s2));
}
