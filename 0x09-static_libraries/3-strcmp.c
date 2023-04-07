#include "main.h"
#include <string.h>
/**
  * _strcmp - This function compare two string
  * @s1: param1
  * @s2: paran2
  * Return: return the difference b/n s2 & s2
  */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; *s1 && *s2; i++)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}
