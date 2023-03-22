#include <stdio.h>

/**
  * main -this will generate fibonaci
  * Return: return 0
  */

int main(void)
{
	int num1 = 1;
	int num2 = 2;
	int sum = num1 + num2;
	int i;
	
	printf("%d, ", num1);
	printf("%d, ", num2);
	for (i = 4; i < 50; i++)
	{
		if (sum > 4000000)
			break;
		else if (sum == 3524578)
			printf("%d", sum);
		else
			printf("%d, ", sum);
		num1 = num2;
		num2 = sum;
		sum = num1 + num2;
	}
	printf("\n");
	return (0);
}
