#include "main.h"
/**
  * create_array - this function return
  * @size:param1
  * @c: param2
  * Return: return char
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *t;

	if (size == 0)
		return (NULL);
	t = malloc(sizeof(char) * size);
	if (t == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		t[i] = c;
	return (t);
}
