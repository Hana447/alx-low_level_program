#include "main.h"
/**
  * leet - This function replace letter with number
  * @str: param
  * Return: return char
  */
char *leet(char *str)
{
	char *ptr = str;
	int i, j;
	char a1[] = "aAeEoOtTlL";
	char a2[] = "4433007711";

	for (i = 0; ptr[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (ptr[i] == a1[j])
			{
				ptr[i] = a2[j];
			}
		}
	}
	return (str);
}


