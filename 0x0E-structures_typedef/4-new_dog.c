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
	char *cpname, *cpowner;

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
	cpname = malloc(sizeof(char) * namesize + 1);
	if (cpname == NULL)
	{
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
	{
		cpname[i] = name[i];
	}
	cpowner = malloc(sizeof(char) * ownersize + 1);
	if (cpowner == NULL)
	{
		return (NULL);
	}
	for (i = 0; owner[i] != '\0'; i++)
	{
		cpowner[i] = owner[i];
	}
	ndog->name = cpname;
	ndog->age = age;
	ndog->owner = cpowner;
	return (ndog);
}
