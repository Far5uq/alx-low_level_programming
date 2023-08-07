#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *_strdup - go to the newly allocated memory
 * @str: memory
 *
 * Return: Always 0.
 */

char *_strdup(char *str)
{
size_t len;
char *duplicate;
if (str == NULL)
{
return (NULL);
}
len = strlen(str);
duplicate = (char *)malloc((len + 1) * sizeof(char));
if (duplicate == NULL)
{
return (NULL);
}
strcpy(duplicate, str);
return (duplicate);
}
