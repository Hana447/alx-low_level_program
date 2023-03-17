#include <stdio.h>
/**
  * main - this will print the hexa-decimal
  * Return: return 0
  */
int main(void)
{
	int i = 0;
	int l = 'a';

	while (i <= 9)
	{
		printf("%d", i);
		i++;
	}
	while (l <= 'f')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
