#include "main.h"
/**
  * array_range - This is a function
  * @min: param1
  * @max: param2
  * Return: return int
  */
int *array_range(int min, int max)
{
	int i;
	int *t;

	if (min > max)
		return (NULL);
	t = malloc((max - min + 1) * sizeof(int));
	if (t == NULL)
		return (NULL);
	for (i = 0; i < (max - min + 1); i++)
	{
		t[i] = min + i;
	}
	return (t);
}
