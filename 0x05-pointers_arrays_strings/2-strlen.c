#include "main.h"
#include <stdio.h>

/**
 * _strlen - length of string
 * @s: pointer
 * Return: void
 */

int _strlen(char *s)
{
int i;
int count = 0;
for (i = 0; s[i] != '\0' ; i++)
count++;
return (count);
}
