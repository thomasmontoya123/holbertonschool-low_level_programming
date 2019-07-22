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

int _putchar(char c);

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

typedef struct dog dog_t;

#endif
