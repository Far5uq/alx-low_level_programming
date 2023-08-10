#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: bytes
 *
 * Return: Always 0.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
int s1_length;
int s2_length;
s1_length = string_length(s1);
s2_length = string_length(s2);
if (n >= s2_length)
{
n = s2_length;
}
int new_length;
char *result;
new_length = s1_length + n;
result = malloc(new_length + 1);
if (result == NULL)
{
return (NULL);
}
int i;
for (i = 0; i < s1_length; i++)
{
result[i] = s1[i];
}
for (i = 0; i < n; i++)
{
result[s1_length + i] = s2[i];
}
result[new_length] = '\0';
return (result);
}
