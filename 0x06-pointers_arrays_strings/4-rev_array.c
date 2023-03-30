#include "main.h"
/**
  * reverse_array - This function revers a given array
  * @a: param1
  * @n: param2
  */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n-1; i >= 0; i--)
	{
		if (i != 0)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
