#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: the address of memory to print
 * @max: the size of the memory to print
 *
 * Return: Nothing.
 */

int *array_range(int min, int max)
{
int *arr;
int i;
if (min > max)
{
return (NULL);
}
arr = (int *)malloc((max - min + 1) * sizeof(int));
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i <= max - min; i++)
{
arr[i] = min + i;
}
return (arr);
}
