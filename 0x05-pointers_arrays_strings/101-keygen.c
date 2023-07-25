#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

/**
 * main - generates passwords
 *
 * Return: Always 0.
 */

int main(void)
{
char password[PASSWORD_LENGTH + 1];
srand(time(NULL));
for (int i = 0 ; i < PASSWORD_LENGTH ; i++)
{
password[i] = rand() % ('~' - ' ' + 1) + ' ';
}
password[PASSWORD_LENGTH] = '\0';
printf("Generated Password: %s\n", password);
return (0);
}
