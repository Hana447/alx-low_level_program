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
			for (j = 1; j <= n; j++)
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
