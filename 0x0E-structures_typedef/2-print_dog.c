#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 * @d: char pointer array
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	printf("Age: %6f\n", d->age);
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
		printf("Owner: %s\n", d->owner);
	if (d == NULL)
	{
		return;
	}
}
