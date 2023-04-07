#include <stdio.h>
#include <stdlib.h>

/**
  * main - This is the main function
  * @argc: parametr1
  * @argv: parametr2
  * Return: return0
  */
int main(int argc, char *argv[])
{
	int i, count = 0;

	for (i = 1; i < argc; i++)
	{
		if (argv[i])
			count += 1;
	}
	printf("%d\n", count);
	return (0);
}
