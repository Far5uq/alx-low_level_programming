#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * @argc: argument 1
 * @argv: argument 2
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
int c;
int d;
for (c = 0; c < argc; c++)
{
for (d = 0; argv[c][d] != '\0'; d++)
{
putchar(argv[c][d]);
}
putchar('\n');
}
return (0);
}
