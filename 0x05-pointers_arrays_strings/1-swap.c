#include "main.h"
/**
  * swap_int - This function swap the value of pointers
  * @a: pointer 1
  * @b: pointer 2
  */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}

