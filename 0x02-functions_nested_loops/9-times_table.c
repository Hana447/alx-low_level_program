#include "main.h"
#include <stdio.h>
/**
  * times_table - this function return time table
  *
  */
void times_table(void)
{
	int i = 0;
	int j = 0;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			int n = i * j;
			if (n < 10)
			printf("%d,  ", n);
			printf("%d, ", n);
			j++;
		}
		printf("\n");
		i++;
	}
	printf("\n");
}
