#include "main.h"
#include <stddef.h>
/**
  * _strpbrk - This function that searches a string for any of a set of bytes
  * @s: param1
  * @accept: param2
  * Return: return char
  */
char *_strpbrk(char *s, char *accept)
{
	char *ptr;

	while (*s)
	{
		for (ptr = accept; *ptr != '\0'; ++ptr)
		{
			if (*s == *ptr)
				return (s);
		}
		++s;
	}
	return (NULL);
}
