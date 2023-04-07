#include <stdio.h>
#include <stdlib.h>
/**
  * main - this is main function
  * @argc: parametr 1
  * @argv: parametr 2
  * Return: return 0
  */
int main(int argc, char *argv[])
{
	int i, count;

	if (argc == 1)
		printf("Error\n");
	else if (argc > 1)
	{
		for (i = 1; i < argc; i += 2)
			if (argv[i + 1])
				count = atoi(argv[i]) * atoi(argv[i + 1]);
			else
				count = atoi(argv[i]);
		printf("%d\n", count);
	}
	return (0);
}
