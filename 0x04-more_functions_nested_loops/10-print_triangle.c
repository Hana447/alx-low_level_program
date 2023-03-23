#include "main.h"
/**
  * print_triangle - this function will print triangle
  * @size: par
  */
void print_triangle(int size)
{
	int i, j, k, sizecopy;

	sizecopy = size;

	if (size > 0)
	{
		for (j = 1; j <= size; j++)
		{
			for (k = sizecopy - 1; k > 0; k--)
				_putchar(' ');
			for (i = j; i >= 1; i--)
				_putchar('#');
			_putchar('\n');
			sizecopy--;
		}
	}
	else
		_putchar('\n');
}
