#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * *new_dog - prinsa a new dog
 * @name: charcter 1
 * @age: pointer
 * @owner: chacracter 2
 *
 * Return: Always 0.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_d;
new_d = malloc(sizeof(dog_t));
if (new_d)
{
new_d->name = strdup(name);
if (!new_d->name)
{
free(new_d);
return (NULL);
}
new_d->age = age;
new_d->owner = strdup(owner);
if (!new_d->owner)
{
free(new_d->name);
free(new_d);
return (NULL);
}
}
return (new_d);
}
