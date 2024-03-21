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
	int i = 0, j = 0, len_name = 0, len_owner = 0;
	dog_t *my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
		return (NULL);
	if (name == NULL || owner == NULL)
		return (NULL);
	while (name[i] != 0)
	{
		len_name++;
		i++;
	}
	my_dog->name = malloc(sizeof(char) * (len_name) + 1);
	if ((*my_dog).name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	for (i = 0; name[i] != 0; i++)
		my_dog->name[i] = name[i];

	my_dog->name[i] = '\0';
	my_dog->age = age;
	while (owner[j] != 0)
	{
		len_owner++;
		j++;
	}
	my_dog->owner = malloc(sizeof(char) * (len_owner) + 1);
	if ((*my_dog).owner == NULL)
	{
		free(my_dog);
		free(my_dog->name);
		return (NULL);
	}
	for (j = 0; owner[j] != 0; j++)
		my_dog->owner[j] = owner[j];

	my_dog->owner[j] = '\0';
	return (my_dog);
}
