#include "main.h"
#include <stdio.h>
/**
  * times_table - this function return time table
  *
  */
void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int x = i * j;

			if (j == 0)
				printf("%d,", x);
			else if (j < 9)
				if (x < 10)
					printf("  %d,", x);
				else
					printf(" %d,", x);
			else
				if (x < 10)
					printf("  %d", x);
				else
					printf(" %d", x);
		}
		printf("\n");
	}
}
