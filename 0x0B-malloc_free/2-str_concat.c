#include "main.h"
/**
  * str_concat - This is function concatinate string
  * @s1: param1
  * @s2: param2
  * Return: char
  */
char *str_concat(char *s1, char *s2)
{
	char *t;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	t = malloc(strlen(s1) + strlen(s2) + 1);
	if (t == NULL)
		return (NULL);
	strcpy(t, s1);
	strcat(t, s2);
	return (t);
}
