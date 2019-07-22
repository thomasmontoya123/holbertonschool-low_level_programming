#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - define a dog type
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * struc dog - Typedef
 */
typedef struct dog dog_t;

void print_dog(struct dog *d);

void init_dog(struct dog *d, char *name, float age, char *owner);

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
