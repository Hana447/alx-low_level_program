#include <stdio.h>
/**
  * main - this will print letters in revers
  * Return: return 0
  */
int main(void)
{
	int i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
