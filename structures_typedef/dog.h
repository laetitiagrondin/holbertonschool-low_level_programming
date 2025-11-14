#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure representating a dog
 * @name: name of the dog (char *)
 * @age: age of the dog (float)
 * @owner: name of the dog's owner (char *)
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
