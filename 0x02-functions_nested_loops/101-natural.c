#include <stdio.h>
/**
  * main - this program find and add multiples of 3 and 5
  * Return: return 0
  */
int main(void)
{
	int num1 = 5;
	int num2 = 3;
	int i;
	int sum = 0;

	for (i = 3; i < 1024; i++)
	{
		int sum1 = num1 * i;
		int sum2 = num2 * i;

		sum = sum1 + sum2;
	}
	printf("%d\n", sum);
	return (0);
}
