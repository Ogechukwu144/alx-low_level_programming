#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - a function that gets a lemgth of a string
 * @s: the string
 *
 * Return: length of a string @s
 */

int _strlen(const char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}

/**
 * _strcopy - a function that returns @dest with a copy of the string
 * from src
 * @src: string to copy
 * @dest: destination to copy string to
 *
 * Return: destination @dest
 */

char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - a function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to struct dog if success,
 * NULL if function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	/* if name and owner are empty and age is less than 0 return NULL */
	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = _strcopy(dog->name, name);
	dog->age = age;
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}
