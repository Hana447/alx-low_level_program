#include "main.h"
/**
  * _calloc -This is function
  * @nmemb: param1
  * @size: param2
  * Return: void
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *t;

	if (nmemb == 0 || size == 0)
		return (NULL);
	t = malloc(nmemb * size);
	if (t == NULL)
		return (NULL);

	return (t);
}
