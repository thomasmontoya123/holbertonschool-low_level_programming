#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strcpy - function that prints n elements
 * @src: array source
 * @dest: array destination
 *   (* a blank line
 *    * Description: Longer description of the function)?
 *    (* section header: Section description)*
 * Return: char pointer
 *
 */
char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != 0; a++)
	{
		dest[a] = src[a];
	}

	dest[a] = '\0';
	return (dest);
}
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
	char *cpname, *cpowner;
	unsigned int namesize, ownersize, i;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
	{
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
	{
		namesize++;
	}
	for (i = 0; owner[i] != '\0'; i++)
	{
		ownersize++;
	}
	ndog->age = age;
	cpname = malloc(sizeof(char) * (namesize + 1));
	if (cpname == NULL)
	{
		free(ndog);
		return (NULL);
	}
	cpname = _strcpy(cpname, name);
	cpowner = malloc(sizeof(char) * (ownersize + 1));
	if (cpowner == NULL)
	{
		free(cpname);
		free(ndog);
		return (NULL);
	}
	cpowner = _strcpy(cpowner, owner);
	ndog->name = cpname;
	ndog->owner = cpowner;
	return (ndog);

}
