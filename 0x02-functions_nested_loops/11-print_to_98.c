#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print numbers n - 98
 * @n: nuber to start from
 *
 * Return: Always 0.
 */

void print_to_98(int n)
{
int c;
if (n >= 0 && n <= 98)
{
for (c = n ; c <= 98 ; c++)
{
printf("%d", c);
if (c != 98)
printf(", ");
}
printf("\n");
}
else if (n < 0)
{
for (c = n ; c <= 98 ; c++)
{
printf("%d", c);
if (c != 98)
printf(", ");
}
printf("\n");
}
else if (n > 98)
{
for (c = 0 ; c >= 98 ; c--)
{
printf("%d", c);
if (c != 98)
printf(", ");
}
printf("\n");
}
else if (n == 98)
printf("%d\n", n);
}
