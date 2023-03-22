#include<stdio.h>
/**
  * main - this function return fibonacinumber
  * Return: return 0;
  */
int main(void)
{
	int i;
	long int num1 = 1;
	long int num2 = 2;
	long int sum = num1 + num2;

	printf("%ld, ", num1);
	printf("%ld, ", num2);

	for (i = 3; i <= 50; i++)
	{	
		if (i < 50)
			printf("%ld, ", sum);
		else
			printf("%ld", sum);
		num1 = num2;
		num2 = sum;
		sum = num1 + num2;
	}
	printf("\n");
	return (0);

}

