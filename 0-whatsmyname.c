#include <stdio.h>
#include <stdlib.h>

/**
  * main - this is the main fumction
  * Return: return 0
  * @argc: argument 1
  * @argv: argument 2
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
