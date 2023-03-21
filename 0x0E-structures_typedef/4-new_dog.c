#include "dog.h"

/**
 * new_dog - creates a new instance of dog
 * @name:  name of dog
 * @age: age of dog
 * @owner: name of owner
 * Return: dog ptr of type dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	size_t name_len = strlen(name);
	size_t owner_len = strlen(owner);
	dog_t *dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(name_len + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	strncpy(dog->name, name, name_len + 1);
	dog->name[name_len] = '\0';

	dog->owner = malloc(owner_len + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	strncpy(dog->owner, owner, owner_len + 1);
	dog->owner[owner_len] = '\0';

	dog->age = age;

	return (dog);
}
