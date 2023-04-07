#include <stdio.h>
#include <stdlib.h>
/**
  * main - this is main function
  * @argc: param 1
  * @argv: param2
  * Return: return 0
  */
int main(int argc, char *argv[])
{
	int cents = atoi(argv[1]);
	int coins = 0;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	coins += cents / 25;
	cents %= 25;

	coins += cents / 10;
	cents %= 10;

	coins += cents / 5;
	cents %= 5;

	coins += cents / 2;
	cents %= 2;

	coins += cents;

	printf("%d\n", coins);
	return (0);
}
