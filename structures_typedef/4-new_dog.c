#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 *new_dog - func name
 *@name: name
 *@age: age
 *@owner: owner
 *Return: returned value
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
		return (NULL);

	my_dog->name = malloc(sizeof(char) * (strlen(name)) + 1);

	if ((*my_dog).name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	strcpy(my_dog->name, name);

	my_dog->age = age;

	my_dog->owner = malloc(sizeof(char) * (strlen(owner)) + 1);

	if ((*my_dog).owner == NULL)
	{
		free(my_dog);
		free(my_dog->name);
		return (NULL);
	}
	strcpy(my_dog->owner, owner);

	return (my_dog);
}
