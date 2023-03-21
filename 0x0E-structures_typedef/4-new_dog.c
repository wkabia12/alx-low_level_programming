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

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	ptr = malloc(sizeof(dog_t));
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->name = malloc(name_len);
	if (ptr->name == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}
	strncpy(ptr->name, name, name_len);
	ptr->name[name_len - 1] = '\0';

	ptr->owner = malloc(owner_len);
	if (ptr->owner == NULL)
	{
		free(ptr->owner);
		free(ptr);
		return (NULL);
	}
	strncpy(ptr->owner, owner, owner_len);
	ptr->name[owner_len - 1] = '\0';

	ptr->age = age;
	return (ptr);
}
