#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - prints opcodes
 *
 * @start: The operator
 * @num_bytes: The function associated
 */

void print_opcodes(char *start, int num_bytes)
{
int i;
for (i = 0; i < num_bytes; i++)
{
printf("%02x", (unsigned char)start[i]);
if (i < num_bytes - 1)
{
printf(" ");
}
}
printf("\n");
}

/**
 * main - prints result of arguement
 * @argc: int 1
 * @argv: int 2
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error\n");
return (1);
}
int num_bytes;
num_bytes = atoi(argv[1]);
if (num_bytes <= 0)
{
printf("Error\n");
return (2);
}
print_opcodes((char *)main, num_bytes);
return (0);
}
