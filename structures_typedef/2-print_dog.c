#include <stdio.h>
#include "dog.h"
/**
 *print_dog - print
 *@d: strc name
 */
void print_dog(struct dog *d)
{
	printf("Name : %s\n", (*d).name);
	printf("Age : %d\n", (*d).age);
	printf("Owner : %s\n", (*d).owner);
}
