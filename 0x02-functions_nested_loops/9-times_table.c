#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */
void times_table(void)
{
int i, n, result;
for (i = 0 ; i < 10 ; i++)
{
for (n = 0 ; n < 10 ; n++)
{
result = i * n;
 printf("%2d, ", result);
}
printf("\n");
}
}
