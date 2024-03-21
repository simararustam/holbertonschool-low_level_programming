#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
  * free_dog - entry point
  * @d: dog strc
  */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
