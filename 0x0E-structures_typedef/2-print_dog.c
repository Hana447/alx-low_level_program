#include "dog.h"
#include <stddef.h>
#include <stdio.h>
/**
  * print_dog - thid is a function
  * @d:param
  * Return: return void
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
