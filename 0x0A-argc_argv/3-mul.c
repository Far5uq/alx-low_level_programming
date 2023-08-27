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
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 if successful, 1 if the number of arguments is incorrect
 */

int main(int argc, char *argv[])
{
int r, i, t;
i = 1;
if (argc != 3)
{
_putchar('E');
_putchar('r');
_putchar('r');
_putchar('o');
_putchar('r');
_putchar('\n');
return (1);
}
r = custom_atoi(argv[1]) * custom_atoi(argv[2]);
if (r < 0)
{
_putchar('-');
r = -r;
}
if (r == 0)
{
_putchar('0');
_putchar('\n');
}
else
{
t = r;
while ((t /= 10) > 0)
{
i *= 10;
}
while (i > 0)
{
_putchar((r / i) +'0');
r %= i;
i /= 10;
}
_putchar('\n');
}
return (0);
}
