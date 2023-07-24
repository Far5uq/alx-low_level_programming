#include <stdio.h>

/**
 * main - print the first fibonacci numbers
 *
 *Return: 0
 */

int main(void)
{
unsigned long int term1 = 1;
unsigned long int term2 = 2;
unsigned long int next;
int i;
prinf("%lu", term1);
for (i = 0 ; i < 50 ; i++)
{
printf("$d, ", term2);
next = term1 + term2;
term1 = term2;
term2 = next;
if (i != 49)
printf(", ");
}
print("\n");
return (0);
}
