#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}

/**
 * custom_atoi - custom function to convert a string to an integer
 * @str: The string to convert
 *
 * Return: The integer value of the string
 */
int custom_atoi(char *str)
{
int c, i, s;
c = 0;
i = 0;
s = 1;
if (str[0] == '-')
{
s = -1;
i = 1;
}
for (; str[i] != '\0'; i++)
{
if (str[i] >= '0' && str[i] <= '9')
{
c = c * 10 + (str[i] - '0');
}
else
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
_exit(1);
}
}
return (s * c);
}

/**
 * is_positive_number - checks if a string represents a positive number
 * @str: The string to check
 *
 * Return: 1 if it's a positive number, 0 otherwise
 */

int is_positive_number(char *str)
{
int i;
i = 0;
while (str[i] != '\0')
{
if (str[i] < '0' || str[i] > '9')
{
return (0);
}
i++;
}
return (1);
}

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 if successful, 1 if there's an error
 */
int main(int argc, char *argv[])
{
int i, s, n, d, t;
s = 0;
if (argc == 1)
{
_putchar('0');
_putchar('\n');
return (0);
}
for (i = 1; i < argc; i++)
{
if (is_positive_number(argv[i]))
{
n = custom_atoi(argv[i]);
if (n > 0)
{
s += n;
}
}
else
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
return (1);
}
}
d = 1;
t = s;
while ((t /= 10) > 0)
{
d *= 10;
}
while (d > 0)
{
_putchar((s / d) + '0');
s %= d;
d /= 10;
}
_putchar('\n');
return (0);
}
