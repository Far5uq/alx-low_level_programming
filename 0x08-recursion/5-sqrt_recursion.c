#include "main.h"

/**
 * _sqrt_recursion - returns the square root of anumber
 * @n: number
 *
 * Return: Always 0.
 */

int _sqrt_recursion(int n)
{
int b;
int start;
int end;
int mid;
if (start > end)
{
return (-1);
}
int mid = (start + end) / 2;
unsigned long long midSquared = (unsigned long long)mid * mid;
if (midSquared == n)
{
return (mid);
}
else if (midSquared > n)
{
return (b(n, start, mid - 1));
}
else
{
return (b(n, mid + 1, end));
}
}

int _sqrt_recursion(int n)
{
return (_sqrt_helper(n, 0, n));
}
