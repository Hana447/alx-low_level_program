#include "main.h"
/**
  * print_diagonal - this function return diagonal line
  * @n: par
  */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
		_putchar('\n');
	}
}