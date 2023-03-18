#include <stdio.h>
/**
  * main - this is complicated
  * Return: return 0
  */
int main(void)
{

	int i;
	int j;
	int q;
	int s;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10 ; j++)
		{
			for (q = 0; q < 10; q++)
			{
				for (s = 1; s < 10; s++)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar(' ');
					putchar('0' + q);
					putchar('0' + s);
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
