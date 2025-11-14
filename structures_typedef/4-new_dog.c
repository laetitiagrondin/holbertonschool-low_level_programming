#include <stdlib.h>
#include "dog.h"

/**
 * copy_string - Creates a copy of a string
 * @str: string to copy
 *
 * Return: Pointer to the newly allocated copy
 * or NULL if memory allocation fails
 */
char *copy_string(char *str)
{
	int i = 0;
	char *cpy;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i = i + 1;
	}
	cpy = malloc(i + 1);
	if (cpy == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		cpy[i] = str[i];
		i = i + 1;
	}
	cpy[i] = '\0';
	return (cpy);
}

/**
 * new_dog - Creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the dog's owner
 *
 * Return: pointer to the newly created dog (dog_t *)
 * or NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	d->name = copy_string(name);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = copy_string(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->age = age;
	return (d);
}
