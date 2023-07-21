#include "main.h"

/**
 * print_triangle - prints a triangle of '#' characters
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
int b, c, j;
if (size <= 0)
{
_putchar('\n');
}
for (b = 1; b <= size; b++)
{
for (c = 1; c <= size - b; c++)
{
_putchar(' ');
}
for (j = 1; j <= b; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
