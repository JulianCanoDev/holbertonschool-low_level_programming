#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 * @d: char pointer array
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d -> name == NULL)
	{
		printf("Name: (nil)");
	}
	else if (d -> owner == NULL)
	{
		printf("Owner: (nil)");
	}
	else if (d == NULL)
	{
		return;
	}
	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
