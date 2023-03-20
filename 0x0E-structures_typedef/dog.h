#ifndef HEADER_H
#define HEADER_H
#include <stdlib.h>
#include <stdio.h>
/**
 * struct dog - container for dog name, age and owner
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
