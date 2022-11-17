#include "dog.h"

/**
 * init_dog - initialising a variable of type struct dog
 * @d: struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
		/* or d->owner = owner; */
	}
}
