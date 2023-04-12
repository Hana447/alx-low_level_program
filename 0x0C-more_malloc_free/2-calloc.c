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
	unsigned int i;
	char *temp;

	if (nmemb == 0 || size == 0)
		return (NULL);
	t = malloc(nmemb * size);
	if (t == NULL)
		return (NULL);
	temp = t;
	for (i = 0; i < (size * nmemb); i++)
		temp[i] = '\0';

	return (t);
}
