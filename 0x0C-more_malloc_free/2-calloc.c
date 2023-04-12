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
	unsigned int tsize;

	if (nmemb == 0 || size == 0)
		return (NULL);
	tsize = nmemb * size;
	t = malloc(tsize);
	if (t == NULL)
		return (NULL);

	return (t);
}
