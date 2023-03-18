#include <stdio.h>
/**
  * main - this fill will print 1*9 with comma
  * Return: return 0
  */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar('0' + i);
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
