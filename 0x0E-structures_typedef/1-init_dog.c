#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - initialises a variable of type struct dog
 * @d: address of variable
 * @name: name of the dog
 * @age: age of dog
 * @owner: owner of the dog
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
