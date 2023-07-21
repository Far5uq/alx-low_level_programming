#include "main.h"

/**
 * print_diagonal - prints diagonal line on terminal
 * @n: number of times line is printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
if (n <= 0)
_putchar('\n');
else
{
int i, j;
for (i = 0 ; i < n ; i++)
{
for (j = 0 ; j <= i ; j++)
-putchar(' ');
_putchar('\\');
-putchar('\n');
}
}
}
