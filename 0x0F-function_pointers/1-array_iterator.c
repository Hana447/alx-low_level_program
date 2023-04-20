#include "function_pointers.h"
/**
  * array_iterator - this is function
  * @array: param
  * @size: param2
  * @action: param3
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;
	void (*f_ptr)(int) = action;

	while (i != size)
	{
		f_ptr(array[i]);
		i++;
	}
}
