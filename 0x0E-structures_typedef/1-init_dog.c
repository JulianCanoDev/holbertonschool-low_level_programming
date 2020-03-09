#include "dog.h"

/**
 * init_dog - function that initialize a variable of type
 * @d: Struct pointer
 * @name: Char pointer
 * @age: Float variable
 * @owner: Char pointer
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
