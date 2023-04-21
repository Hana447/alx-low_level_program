#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * main - This is Entry point
  * @argc: number of argument
  * @argv: array of argument
  * Return: return 0
  */
int main(int argc, char *argv[])
{
	int i, j, sum;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	i = atoi(argv[1]);
	j = atoi(argv[3]);

	op_func = get_op_func(argv[2]);

	if(!op_func)
	{ printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && j == 0 )
	{
		printf("Error\n");
		exit(100);
	}
	sum = op_func(i, j);
	printf("%d\n", sum);
	return (0);
}
