#include <stdio.h>
/**
  * main - this program find and add multiples of 3 and 5
  * Return: return 0
  */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 3; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5))
		sum = sum + i
	}
	printf("%d\n", sum);
	return (0);
}
