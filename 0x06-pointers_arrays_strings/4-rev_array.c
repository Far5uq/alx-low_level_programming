#include "main.h"

/**
 * reverse_array - reverse the content of an array
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: dest
 */

void reverse_array(int *a, int n)
{
int s;
int e;
for (s = 0 ; s < n-- ; s++)
{
e = a[s];
a[s] = a[n];
a[n] = e;
}
}
