#include "main.h"
/**
  * print_array - This function return the value of an array separated by coma
  * and space
  * @a: param 1
  * @n: param2
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}
	printf("\n");
}
