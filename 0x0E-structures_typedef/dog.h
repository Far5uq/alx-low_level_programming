#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure of dog
 * typedef struct - structure type
 * init_dog -varriable type
 * print_dog - structure
 * *new_dog - prints new dog
 * free_dog - frees dog
 * @name: character
 * @age: character
 * @owner: character
 *
 * Return: Always 0.
 */

struct dog
{
char *name;
float age;
char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
