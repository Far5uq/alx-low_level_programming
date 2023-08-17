#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints an integer
 * @array: the integer to print
 * @size: pointer
 * @action: char
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}

/**
 * custom_action - check the code
 * @value: prints
 *
 * Return: Always 0.
 */

void custom_action(int value)
{
putchar(value);
}
