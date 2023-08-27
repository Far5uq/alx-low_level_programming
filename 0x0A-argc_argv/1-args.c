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
 * main - Entry point of the program.
 * @argc: The number of arguments.
 * @argv: An array of strings containing the arguments.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
int count;
int b;
(void)argc;
count = 0;
b = 0;
while (argv[0][b] != '\0')
{
if (argv[0][b] == ' ')
{
count++;
}
b++;
}
_putchar(count + '0');
_putchar('\n');
return (0);
}
