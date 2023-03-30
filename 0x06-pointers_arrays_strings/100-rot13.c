#include "main.h"
/**
  * rot13 -This function return the letter
  * @n: param
  * Return: return0
  */
char *rot13(char *n)
{
	int i, j;
	char str[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char str2[] =
		"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; n[i] != '\0'; i++)
		{
			for (j = 0; j < 52; j++)
			{
				if (n[i] == str[j])
				{
					n[i] = str2[j];
					
				}
			}
		}
		return (n);
}
