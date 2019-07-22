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
	int namesize, ownersize, i;
	char *cpname, *cpowner;
	dog_t *ndog;

	for (i = 0; name[i] != '\0'; i++)
		namesize++;
	for (i = 0; owner[i] != '\0'; i++)
		ownersize++;
	ndog = malloc(sizeof(struct dog));
	if (ndog == NULL)
		return (NULL);
	cpname = malloc(sizeof(char) * (namesize + 1));
	if (cpname == NULL)
	{
		free(ndog);
		free(cpname);
		return (NULL);
	}
	cpowner = malloc(sizeof(char) * (ownersize + 1));
	if (cpowner == NULL)
	{
		free(ndog);
		free(cpowner);
		free(cpname);
		return (NULL);
	}
	for (i = 0; i < namesize; i++)
		cpname[i] = name[i];
	for (i = 0; i < ownersize; i++)
		cpowner[i] = owner[i];
	ndog->name = cpname;
	ndog->age = age;
	ndog->owner = cpowner;
	return (ndog);

}
