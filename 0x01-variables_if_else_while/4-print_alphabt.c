#include <stdio.h>
/**
  * main - this file will print a-z
  * Return: return 0
  */

int main(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		if (i != 'e' && i != 'q')
			putchar(i);
		
		i++;
	}
	putchar('\n');
	return (0);

}
