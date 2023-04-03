#include "main.h"
/**
  * _strchr - This function return the first c character
  * @s: param1
  * @c: param2
  * Return: return char
  */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
		if (*s == c)
		{
			return (s);
		}
		return (NULL);
}
