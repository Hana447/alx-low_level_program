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

	if (strlen(str) == 0 || *str == '\0')
		return (NULL);
	t = malloc(sizeof(char) * strlen(str));
	if (t == NULL)
		return (NULL);
	for (i = 0; i < strlen(str); i++)
		t[i] = str[i];
	return (t);
}

