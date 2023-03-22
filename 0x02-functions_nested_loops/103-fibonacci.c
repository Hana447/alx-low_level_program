#include <stdio.h>

/**
  * main -this will generate fibonaci
  * Return: return 0
  */

int main(void)
{
	int j;
	int k;
	int h;

	int num2 = 2;
	int num1;
	int sum = 0;
	int i;
	int total = 0;
	
	sum = sum + num2;
	for (i = 4; i < 50; i++)
	{
		
		if (sum > 4000000)
			break;
		else if (sum % 2 == 0)
		{
			num1 = num2;
			num2 = sum;
			sum = num1 + num2;
		}
			total = total + sum;
		

	}
	printf("%d\n", total);
	return (0);
}
