#include <stdio.h>

/**
  * main -this will generate fibonaci
  * Return: return 0
  */

int main(void)
{
	int i;
	long int num1 = 1;
	long int num2 = 2;
	long int sum = 0;
	long int next;

	for (i = 3; i <= 50; i++)
	{
		if (num1 < 4000000 && (num1 % 2) == 0)
		{
			sum = sum + num1;
		}
		next = num1 + num2;
		num1 = num2;
		num2 = next;
	}
	printf("%ld\n", sum);

	return (0);
}
