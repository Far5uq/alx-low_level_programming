#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sums all parameters
 * @n: constant integers
 *
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
va_list args;
int sum;
unsigned int i;
va_start(args, n);
sum = 0;
for (i = 0; i < n; i++)
{
sum += va_arg(args, int);
}
va_end(args);
return (sum);
}
