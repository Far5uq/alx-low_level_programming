#include "main.h"

/**
 * more_numbers - prints from 0 - 14
 *
 * Return: void
 */

void more_numbers(void)
{
int i;
int a;
for (i = 0 ; i < 10 ; i++)
{
for (a = 0 ; a < 15 ; a++)
{
if (a > 9)
_putchar(a / 10 + '0');
_putchar(a % 10 + '0');
}
_putchar('\n');
}
}
