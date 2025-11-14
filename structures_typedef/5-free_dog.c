#include <stdlib.h>
#inclure "main.h"
/**
 * free_dog - Frees memory allocated for a dog structure
 * @: pointer to the dog_t structure to free
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
