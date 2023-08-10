#include "main.h"
#include <stdio.h>

/**
 * _allarg - print all argument
 * @arcc: argument 1
 * @argv: argument 2
 *
 * Return: Always 0.
 */

int _allarg(int argc, char *argv[])
{
int n;
int c;
for (n = 0; n < argc; n++)
{
for (c = 0; argv[n][c] != '\0'; c++)
{
putchar(argv[n][c]);
}
putchar('\n');
}
return (0);
}
