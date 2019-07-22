#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: new dog
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	unsigned int namesize, ownersize, i;

	for (i = 0; name[i] != '\0' ; i++)
	{
		namesize++;
	}

	for (i = 0; owner[i] != '\0'; i++)
	{
		ownersize++;
	}

	ndog = malloc(sizeof(dog_t));

	if (ndog == NULL)
	{
		return (NULL);
	}

	ndog->name = malloc(namesize + 1);

	if (ndog == NULL)
	{
		return (NULL);
	}

	ndog->owner = malloc(ownersize + 1);

	if (ndog == NULL)
	{
		return (NULL);
	}

	ndog->name = name;
	ndog->owner = owner;
	ndog->age = age;

	return (ndog);
}
