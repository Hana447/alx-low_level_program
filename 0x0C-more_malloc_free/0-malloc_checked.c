#include "main.h"
#include <stdlib.h>
/**
  * malloc_checked -This is function
  * @b:param1
  * Return: void
  */
void *malloc_checked(unsigned int b)
{
	void *t = malloc(b);

	if (t == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(98);
	}
	return (t);
}
