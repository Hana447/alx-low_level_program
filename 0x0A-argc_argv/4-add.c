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
	int i, j;
	int  count = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		char *isletter = argv[i];

		for (j = 0; isletter[j] != '\0'; j++)
		{
			if (isdigit(isletter[j]))
				count += atoi(argv[i]);
			else
			{
				count = 0;
				printf("Error\n");
				return (1);
			}
		}
	}

	printf("%d\n", count);
	return (0);
}
