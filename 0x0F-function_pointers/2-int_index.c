#include "function_pointers.h"
/**
  * int_index -this function
  * @array: paaram1
  * @size: param2
  * @cmp: param3
  * Return: int
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || size == 0 || cmp == NULL)
		return (-1);
	while (i < size)
	{
		if (cmp (array[i]) != 0)
			return (i);
		i++;
	}
	return (-1);
}
