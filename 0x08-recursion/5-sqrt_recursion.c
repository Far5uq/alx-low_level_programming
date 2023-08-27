#include "main.h"

/**
 * _sqrt_recursive - Recursive helper function to find the square root.
 * @n: The number to find the square root of.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of 'n', or -1 if it doesn't have one.
 */
int _sqrt_recursive(int n, int guess)
{
if (guess * guess == n)
return (guess);
if (guess * guess > n)
return (-1);
return (_sqrt_recursive(n, guess + 1));
}

/**
 * _sqrt_recursion - Calculate the natural square root of a number.
 * @n: The number to find the square root of.
 *
 * Return: The natural square root of 'n', or -1 if it doesn't have one.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (n);
return (_sqrt_recursive(n, 1));
}
