#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a dog structure
 * @d: dog
 *
 * Return: Always 0.
 */

void print_dog(struct dog *d)
{
if (d)
{
printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %.1f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
}
