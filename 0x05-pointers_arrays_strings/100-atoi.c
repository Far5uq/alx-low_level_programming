#include "main.h"

/**
 * _atoi - convert string to integer
 * @s: string to convert
 *
 * Return: s
 */

int _atoi(char *s)
{
int n = 0;
int c = 1;
int i = 0;
if (s[0] == '-')
{
n = -1;
i++;
}
else if (s[0] == '+')
{
i++;
}
while (s[i] != '\0')
{
if (s[i] >= '0' && s[i] <= '9')
{
c = c * 10 + (s[i] - '0');
}
else
{
break;
}
i++;
}
return (c *n);
}
