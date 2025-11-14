#include <stdlib.h>
#include "dog.h"
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
	int i;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (name[i] != '\0')
	{
		i++;
	}
	d->name = malloc(i + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	i = 0;
	while (name[i] != '\0')
	{
		d->name[i] = name[i];
		i++;
	}
	d->name[i] = '\0';
	i = 0;
	while (owner[i] != '\0')
	{
		i++;
	}
	d->owner = malloc(i + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	i = 0;
	while (owner[i] != '\0')
	{
		d->owner[i] = owner[i];
		i++;
	}
	d->owner[i] = '\0';
	d->age = age;
	return (d);
}
