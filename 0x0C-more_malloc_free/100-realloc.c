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

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);
	t = malloc(new_size);
	if (t == NULL)
		return (NULL);
	if (old_size < new_size)
		memcpy(t, ptr, old_size);
	else
		memcpy(t, ptr, new_size);
	free(ptr);
	return (t);
}
