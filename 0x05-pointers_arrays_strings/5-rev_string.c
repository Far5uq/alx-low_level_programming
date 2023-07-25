#include "main.h"
#include <stdio.h>

/**
 * rev_string - function for reverse
 * @s: pointer
 *
 * Return: void
 */

void rev_string(char *s)
{
int i;
int c = 0;
for (i = 0 ; s[i] != '\0' ; i++)
c++;
for (i = 0 ; i < c / 2 ; i++)
{
char j;
j = s[i];
s[i] = s[c - 1 - i];
s[c - 1 - i] = j;
}
}
