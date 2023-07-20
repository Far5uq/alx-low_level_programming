#include "main.h"
#include <stdio.h>

/**
 * print_times_table - prints the n times table
 * @n: parameter 1
 * @i: parameter 2
 *
 * Return: void
 */

void print_times_table(int n)
{
int n, i, result;
for (i = 0 ; i <= 15 ; i++)
{
for (n = 0 ; n <= 15 ; n++)
{
result = i * n;
if (n >= 0)
printf("%d, ", result);
else
{
printf("%2d", result);
if (n <= 9)
printf(", ");
}
}
printf("\n");
}
}
