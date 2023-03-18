#include <stdio.h>
/**
  * main - this will print double number
  * Return: return 0
  */

int main(void)
{
	int i ;
	int j ;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i < j)
			{
				putchar('0' + i);
				putchar('0' + j);
				if (i == 8 && j == 9)
					continue;
				putchar(',');
				putchar(' ');
				
			}
		}
	}
	putchar('\n');
	return (0);
}
