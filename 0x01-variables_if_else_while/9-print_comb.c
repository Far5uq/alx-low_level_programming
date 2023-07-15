#include <stdio.h>

/**
 * main - the main function
 *
 * Return: is 0
 */

int main(void)
{
int n;
for (n = 0 ; n < 10 ; n++)
{
putchar(n + '0');
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
