#include "main.h"
#include <stdio.h>
/**
  * print_times_table - this function return times table
  * @n: this param
  */
void print_times_table(int n)
{
	int i;
	int j;

	if  (n >= 0 && n <= 15)
	{
		if (n == 0)
			printf("%d", 0);
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				int x = i * j;

				if (j == 0)
					printf("%d,", x);
				else if (j < n)
					if (x < 10)
						printf("   %d,", x);
					else if (x < 100)
						printf("  %d,", x);
					else
						printf(" %d,", x);
				else
					if (x < 10)
						printf("   %d", x);
					else if (x < 100)
						printf("  %d", x);
					else
						printf(" %d", x);
				}
			printf("\n");
		}
	}
}
