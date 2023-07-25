#include "main.h"

/**
 * puts_half - function that print string
 * @str: pointer
 * Return: void
 */

void puts_half(char *str)
{
int c, n, v = 0;
for (c = 0 ; str[c] != '\0' ; c++)
c++;
n = (v - 1) / 2;
for (c = n + 1 ; str[c] != '\0' ; c++)
_putchar(str[c]);
_putchar('\n');
}
