#include "dog.h"

/**
 * print_dog - prints contents of var of type struct dog
 * @d: initalized ptr
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(0);
	if ((*d).name == NULL)
		(*d).name = "(nil)";
	if ((*d).owner == NULL)
		(*d).owner = "(nil)";

	if ((*d).age == 0)
		printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, 0.0, (*d).owner);
	else
		printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
}
