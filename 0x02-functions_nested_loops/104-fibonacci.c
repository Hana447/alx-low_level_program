#include <stdio.h>
/**
  * main -t his program return fibonaci
  * Return: return 0
  */
int main(void)
{
	int i;
	int num1 = 1;
	int num2 = 2;
	int sum = num1 + num2;

	printf("%d, ", num1);
	printf("%d, ", num2);
	for (i = 3; i < 98; i++)
	{
		printf("%d, ", sum);
		num1 = num2;
		num2 = sum;
		sum = num1 + num2;
		printf("\n");
	}
	return (0);
}
