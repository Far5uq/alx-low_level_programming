#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *argstostr - concatenates all arguments of this program
 * @ac: argument 1
 * @av: argument 2
 *
 * Return: Always 0.
 */

char *argstostr(int ac, char **av)
{
int i;
size_t total_length;
char *concatenated;
size_t current_index;
if (ac == 0 || av == NULL)
{
return (NULL);
}
total_length = 0;
for (i = 0; i < ac; i++)
{
total_length += strlen(av[i]) + 1;
}
concatenated = (char *)malloc((total_length + 1) * sizeof(char));
if (concatenated == NULL)
{
return (NULL);
}
current_index = 0;
for (i = 0; i < ac; i++)
{
strcpy(concatenated + current_index, av[i]);
current_index += strlen(av[i]);
concatenated[current_index] = '\n';
current_index++;
}
concatenated[current_index] = '\0';
return (concatenated);
}
