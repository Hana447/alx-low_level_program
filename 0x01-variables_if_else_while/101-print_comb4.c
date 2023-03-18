#include <stdio.h>
/**
  * main - this will print 3 combination num
  * Return: return 0
  */
int main(void)
{
	int i;
	int j;
	int q;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (q = 0; q < 10; q++)
			{
				if  (i < j && j < q)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + q);
					if (i == 7 && j == 8 && q == 9)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
