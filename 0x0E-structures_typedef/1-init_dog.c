#include <stdio.h>
#include "dog.h"

/**
  * init_dog - this is a function
  * @d:param1
  * @name: param2
  * @age: param2
  * @owner: param3
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
