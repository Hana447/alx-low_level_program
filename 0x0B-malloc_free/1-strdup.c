#include "main.h"
/**
  * _strdup - This is function
  * @str: param1
  * Return: char
  */
char *_strdup(char *str)
{
	char *t;
	unsigned long int i;

	if (str == NULL)
		return (NULL);

	t = malloc(sizeof(char) * strlen(str) + 1);
	if (t == NULL)
		return (NULL);
	if (strlen(t) == 1)
	{
		t = "";
	}
	else
		for (i = 0; i < strlen(str); i++)
		t[i] = str[i];
	return (t);
}
