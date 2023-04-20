#include "function_pointers.h"
/**
  * array_iterator - this is function
  * @array: param
  * @size: param2
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i = 0;
	void (*f_ptr)(int) = action;

	while(i != size)
	{
		f_ptr (array[i]);
		i++;
	}
}
			
