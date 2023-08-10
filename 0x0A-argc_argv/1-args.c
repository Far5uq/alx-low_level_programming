#include <stdio.h>
#include "main.h"

/**
 * narg - number of argument passed
 * @argc: argument 1
 * @argv: argument 2
 *
 * Return: Always 0.
 */

int narg(int argc[])
{
int n = argc - 1;
return (n);
int b = n;
if (b == 0)
{
putchar('0');
putchar('\n');
}
else
{
while (b > 0)
{
b /= 10;
}
while (n > 0)
{
int digit = n % 10;
n /= 10;
putchar(digit + '0');
}
putchar('\n');
}
return (0);
}
