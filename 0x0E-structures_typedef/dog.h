#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct of information about a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: who owns the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog - typedef for dog struct
 */
typedef struct dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
