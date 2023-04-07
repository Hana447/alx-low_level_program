#include "main.h"
/**
  * _strlen - This function return the length of string
  * @s: par
  * Return: return the count
  */
int _strlen(char *s)
{

	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
