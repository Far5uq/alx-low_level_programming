#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: an array of integers
 * @size: the number of elements in the array
 * @cmp: a pointer to the comparison function
 *
 * Return: index of the first element for which cmp does not return 0,
 *         -1 if no element matches or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int c;
if (array != NULL && cmp != NULL && size > 0)
{
for (c = 0; c < size; c++)
{
if (cmp(array[c]) != 0)
return (c);
}
}
return (-1);
}
