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
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
