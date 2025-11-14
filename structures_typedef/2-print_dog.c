#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints the information of a struct dog
 * @d: pointer to the struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name != NULL)
	{
		printf("Name: %s\n", d->name);
	}
	printf("Age: %.1f\n", d->age);
	if (d->owner != NULL)
	{
		printf("Owner: %s\n", d->owner);
	}
}
