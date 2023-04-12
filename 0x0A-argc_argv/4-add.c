#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  * main - This is main function
  * @argc: parameter
  * @argv: parameter
  * Return: return
  */
int main(int argc, char *argv[])
{
	int j;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	else
	{
		int i;
		int count = 0;

		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			count += atoi(argv[i]);
		}
		printf("%d\n", count);
		return (0);
	}
}
