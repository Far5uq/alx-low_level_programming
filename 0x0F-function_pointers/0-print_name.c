#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_name - prints a name using a given function
 * @name: name to be printed
 * @f: function pointer to the printing function
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char))
{
while (*name)
{
f(*name);
name++;
}
_putchar('\n');
}

/**
 * print_char - prints a character using putchar
 * @c: character to be printed
 *
 * Return: Nothing.
 */

void print_char(char c)
{
_putchar(c);
}
