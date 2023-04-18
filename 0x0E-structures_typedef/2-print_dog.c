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
	printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner != NULL ? d->name : "(nil)");
}
