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
	int i, count = 0;
	char isletter;

	for (i = 0; i < argc; i++)
	{
		isletter = *argv[i];
		if (isalpha(isletter))
		{
			count = 0;
			printf("Error\n");
			return (1);
		}
		else
			count += atoi(argv[i]);
	}
	if (argc == 1)
		printf("%d\n", 0);
	else if (count > 0)
		printf("%d\n", count);
	return (0);
}
