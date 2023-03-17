#include <stdio.h>

/**
  * main - this will print a to z
  * Return: return 0
  */

int main(void)
{
	int i = 'a';
	int c = 'A';

	while  (i <= 'z')
	{
		putchar(i);
		i++;
	}
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
