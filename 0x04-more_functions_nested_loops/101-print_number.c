#include "main.h"

/**
 * print_number -prints integer
 * @n: integer to print
 * Return: void
 */

void print_number(int n)
{
int i = 1;
int c;
if (n < 0)
{
_putchar('-');
n = -n;
}
while (n / i >= 10)
{
i *= 10;
}
while (i > 0)
{
c = n / i;
_putchar('0' + c);
n %= i;
i /= 10;
}
}
