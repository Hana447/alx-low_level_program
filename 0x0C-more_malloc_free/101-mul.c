#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
  * multiply - function
  * @num1: param1
  * @num2: param2
  * Return: char
  */
char *multiply(char *num1, char *num2)
{
	int *result;
	char *res;
	int len1, len2, len;
	int mul, p1, i, j, p2, sum;

	len1 = strlen(num1);
	len2 = strlen(num2);
	len = len1 + len2;
	result = calloc(len, sizeof(int));

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			mul = (num1[i] - '0') * (num2[j] - '0');
			p1 = i + j;
			p2 = i + j + 1;
			sum = mul + result[p2];
			result[p1] += sum / 10;
			result[p2] = sum % 10;
		}
	}

	 i = 0;

	while (i < len && result[i] == 0)
	{
		i++;
	}

	if (i == len)
		return ("0");

	res = malloc(len - i + 1);
	for (j = 0; i < len; i++, j++)
		res[j] = result[i] + '0';
	res[len - i] = '\0';
	free(result);
	return (res);
}
/**
  * main - function
  * @argc: param1
  * @argv: param2
  * Return: return
  */
int main(int argc, char *argv[])
{
	char *num2, *num1, *result;
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	num1 = argv[1];
	num2 = argv[2];

	for (i = 0; num1[i] != '\0'; i++)
	{
		if (!isdigit(num1[i]))
		{
			printf("Error\n");
			return (98);
		}
	}
	for (i = 0; num2[i] != '\0'; i++)
	{
		if (!isdigit(num2[i]))
		{
			printf("Error\n");
			return (98);
		}
	}
	result = multiply(num1, num2);
	printf("%s\n", result);
	free(result);
	return (0);
}
