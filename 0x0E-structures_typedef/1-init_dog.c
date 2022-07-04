#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialization of struct variables for dog
 * @d: address of the variables
 * @name: name of the dog
 * @age: the age of the dog
 * @owner: who owns the dog
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owne = owner;
	}
}
