#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * is_digit_string - string digit
 * @str: string
 *
 * Return: Always 0.
 */

int is_digit_string(const char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (!isdigit(str[i]))
{
return (0);
}
}
return (1);
}

/**
 * *multiply_strings - multiplies numbers
 * @num1: number 1
 * @num2: number 2
 *
 * Return: Always 0.
 */

char *multiply_strings(const char *num1, const char *num2)
{
int len1;
int len2;
int result_len;
int carry, product;
char *result;
int i;
int j;
len1 = strlen(num1);
len2 = strlen(num2);
result_len = len1 + len2;
result = (char *)malloc((result_len + 1) * sizeof(char));
if (result == NULL)
{
fprintf(stderr, "Memory allocation failed\n");
exit(98);
}
for (i = 0; i < result_len; i++)
{
result[i] = '0';
}
result[result_len] = '\0';
for (i = len1 - 1; i >= 0; i--)
{
carry = 0;
for (j = len2 - 1; j >= 0; j--)
{
product = (num1[i] - '0') * (num2[j] - '0')
+ carry + (result[i + j + 1] - '0');
carry = product / 10;
result[i + j + 1] = (product % 10) + '0';
}
result[i] += carry;
}
return (result);
}

/**
 * main - check the code for
 * @argc: checker 1
 * @argv: checker 2
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
char *num1;
char *num2;
char *result;
if (argc != 3 || !is_digit_string(argv[1]) || !is_digit_string(argv[2]))
{
fprintf(stderr, "Error\n");
return (98);
}
num1 = argv[1];
num2 = argv[2];
result = multiply_strings(num1, num2);
printf("%s\n", result);
free(result);
return (0);
}
