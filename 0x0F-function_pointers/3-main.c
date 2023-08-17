#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - checks the code
 * @argc: arguement 1
 * @argv: arguement 2
 *
 * Return: Always 0.
 */


int main(int argc, char *argv[])
{
if (argc != 4)
{
printf("Error\n");
return (98);
}
int num1, num2, result;
char *operator;
int (*operation)(int, int);
num1 = atoi(argv[1]);
operator = argv[2];
num2 = atoi(argv[3]);
operation = get_op_func(operator);
if (!operation)
{
printf("Error\n");
return (99);
}
result = operation(num1, num2);
printf("%d\n", result);
return (0);
}
