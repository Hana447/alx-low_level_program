#include "main.h"
/**
  * _strdup - This is function
  * @str: param1
  * Return: char
  */
char *str_concat(char *s1, char *s2)
{
	char *t;
	
	if (s1 == NULL && s2 == NULL)
		return (NULL);

	t = malloc(strlen(s1) + strlen(s2) + 1);
	if (t == NULL)
		return (NULL);
	strcpy(t,s1);
	strcat(t,s2);
	return (t);
}
