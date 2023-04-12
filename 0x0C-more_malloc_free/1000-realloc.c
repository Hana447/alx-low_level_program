#include "main.h"
/**
  * _realloc - This is function
  * @ptr:para1
  * @old_size:param2
  * @new_size:param3
  * Return: void
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *t;
	char *temp1, *temp;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		t = malloc(new_size);

		if (t == NULL)
			return (NULL);

		return (t);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	temp1 = ptr;
	t = malloc(sizeof(char *) * new_size);

	if (t == NULL)
	{
		free(ptr);
		return (NULL);
	}

	temp = t;

	for (i = 0; i < old_size && i < new_size; i++)
		temp[i] = *temp1++;

	free(ptr);
	return (t);
}
