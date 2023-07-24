#include "main.h"


/**
 * swap_int - swappin of integers
 * @a: first pointer
 * @b: second pointer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
int i;
i = *a;
*a = *b;
*b = i;
}
