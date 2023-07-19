#include "main.h"

/**
 * print_alphabet_x10 -function to print alphabets in lower case
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
char i;
for (i = 'a' ; i <= 'z' ; i++)
_putchar(i + '10');
_putchar('\n');
}
