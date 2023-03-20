#include "dog.h"

/**
 * new_dog - creates a new instance of dog
 * @name:  name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: ptr of type dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;
	size_t name_len = strlen(name) + 1;
	size_t owner_len = strlen(owner) + 1;
	char *name_copy, *owner_copy;

	ptr = malloc(sizeof(dog_t) + name_len + owner_len);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	name_copy = (char *)(ptr + 1);
	memcpy(name_copy, name, name_len);
	ptr->name = name_copy;

	owner_copy = name_copy + name_len;
	memcpy(owner_copy, owner, owner_len);
	ptr->owner = owner_copy;

	ptr->age = age;

	return (ptr);
}
