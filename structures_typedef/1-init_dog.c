#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 *init_dog - func
 *@d: strc
 *@name: name
 *@age:age
 *@owner: owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
