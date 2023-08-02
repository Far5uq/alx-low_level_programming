#include "main.h"
#include <string.h>

/**
 * is_palindrome - pallindrome
 * @s: integer
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */

int is_palindrome(char *s)
{
int left = 0;
int right = strlen(s) - 1;
while (left < right)
{
if (s[left] != s[right])
{
return (0);
}
left++;
right--;
}
return (1);
}
