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
	unsigned int namesize, ownersize, i;

	for (i = 0; name[i] != '\0'; i++)
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
		free(ndog);
		return (NULL);
	}
	ndog->age = age;
	ndog->name = malloc(sizeof(char) * namesize + 1);
	ndog->name = _strcpy(ndog->name, name);
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}
	ndog->owner = malloc(sizeof(char) * ownersize + 1);
	ndog->owner = _strcpy(ndog->owner, owner);
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}
	return (ndog);

}
