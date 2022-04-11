#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 * Return: returns the length of the strin
 */

int _strlen(char *s)
{
	int idx = 0;

	while (*(s + idx) != '\0')
	{
		idx++;
	}

	return (idx);
}

/**
 * _strcpy - copy string to destination
 * @dest: destination
 * @src: string to be copied
 * Return: pointer to the destination.
 */

char *_strcpy(char *dest, char *src)
{
	char *saved = dest;

	while (*src)
	{
		*dest++ = *src++;
	}

	*dest = 0;

	return (saved);
}

/**
 * new_dog - creates a new dog
 * @age: age of dog
 * @name: name of the dog
 * @owner: owner of the dog
 * Return: pointer to created dog if succesful else NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *dog_name;
	char *dog_owner;


	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	dog_name = malloc(_strlen(name) + 1);
	if (dog_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	dog_owner = malloc(_strlen(owner) + 1);
	if (dog_owner == NULL)
	{
		free(new_dog);
		free(dog_name);
		return (NULL);
	}

	_strcpy(dog_name, name);
	_strcpy(dog_owner, owner);

	new_dog->age = age;
	new_dog->name = dog_name;
	new_dog->owner = dog_owner;

	return (new_dog);
}
