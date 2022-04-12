#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - Initialize a variable of type struct dog
 * @d: dog
 * @name: name of dog
 * @age: age of the dog
 * @owner: of the dog
 *
 * Return always 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
