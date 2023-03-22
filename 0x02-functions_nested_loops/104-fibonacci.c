#include <stdio.h>
/**
  * main -t his program return fibonaci
  * Return: return 0
  */
int main(void)
{
	unsigned long int i;
	unsigned long int j;
	unsigned long int j1;
	unsigned long int j2;
	unsigned long int k;
	unsigned long int k1;
	unsigned long int k2;

	j = 1;
	k = 2;
	printf("%lu", j);

	for (i = 1; i < 91; i++)
	{
		printf(", %lu", k);
		k = k + j;
		j = k - j;
	}

	j1 = j / 1000000000;
	j2 = j % 1000000000;
	k1 = k / 1000000000;
	k2 = k % 1000000000;

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", k1 + (k2 / 1000000000));
		printf("%lu", k2 % 1000000000);
		k1 = k1 + j1;
		j1 = k1 - j1;
		k2 = k2 + j2;
		j2 = k2 - j2;
	}

	printf("\n");

	return (0);
}
