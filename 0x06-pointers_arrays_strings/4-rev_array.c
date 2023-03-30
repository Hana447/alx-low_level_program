#include "main.h"
/**
  * reverse_array - This function revers a given array
  * @a: param1
  * @n: param2
  */
void reverse_array(int *a, int n)
{
	int temp;
	int *ptr = a;
	int *ptr1 = a + (n - 1);

	temp = 0;
	while (ptr <= ptr1)
	{
		temp = *ptr;
		*ptr = *ptr1;
		*ptr1 = temp;
		ptr++;
		ptr1--;
	}
}
