#include <stdio.h>
/**
  * main - this file will print 0 - 10
  *Return: return 0
  */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
	putchar('0' + i);
	++i;
	}
		putchar('\n');
	return (0);

}
