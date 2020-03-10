#include "dog.h"
int get_len(int i);
char *str_cpy(char *dest, char *src);

/**
 * new_dog - function that creates a new dog.
 * @name: char pointer array
 * @age: float variable
 * @owner: char pointer array
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_name;
	char *copy_name, *copy_owner;
	int x, name_len = 0, owner_len = 0;

	for (x = 0; name[x] != '\0'; x++)
		name_len++;

	for (x = 0; owner[x] != '\0'; x++)
		owner_len++;
	copy_name = malloc(name_len + 1);
	if (name == NULL)
		return (NULL);
	copy_owner = malloc(owner_len + 1);
	if (name == NULL)
	{
		free(copy_name);
		return (NULL);
	}
	new_name = malloc(sizeof(dog_t));
	if (new_name == NULL)
	{
		free(copy_name);
		free(copy_owner);
		return (NULL);
	}
	for (x = 0; x <= name_len; x++)
		copy_name[x] = name[x];

	for (x = 0; x <= owner_len; x++)
		copy_owner[x] = owner[x];

	new_name->name = copy_name;
	new_name->owner = copy_owner;
	new_name->age = age;
	return (new_name);
}
