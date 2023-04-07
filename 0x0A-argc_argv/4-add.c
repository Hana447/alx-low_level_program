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
			if (isdigit(argv[i][0]))
				count += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", count);
		return (0);
	}
}
