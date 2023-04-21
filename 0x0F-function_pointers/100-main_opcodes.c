#include <stdio.h>
#include <stdlib.h>
/**
  * print_opcodes - This is function
  * @main_func: param
  * @num_bytes: param2
  */
void print_opcodes(char *main_func, int num_bytes)
{
	int i;

	for (i = 0; i < num_bytes; i++)
		printf("%02hhx", *(main_func + i));
	printf("\n");
}
/**
  * main - Entry function
  * @argc:  count
  * @argv: array
  * Return: 0
  */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	char *main_func = (char *)main;

	print_opcodes(main_func, num_bytes);
	return (0);
}
