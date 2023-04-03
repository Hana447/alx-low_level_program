#include "main.h"
/**
  * print_diagsums - This function that prints the sum of the two diagonals
  * of a square matrix of integers
  * @a: param1
  * @size: param2
  */
void print_diagsums(int *a, int size)
{
	int i, sum = 0, sum2 = 0;

	for (i = 0; i < size * size; i += size + 1)
		sum += a[i];
	for (i = size - 1; i < size * size - 1; i += size - 1)
		sum2 += a[i];
	printf("%d, ", sum);
	printf("%d", sum2);
	printf("\n");
}
