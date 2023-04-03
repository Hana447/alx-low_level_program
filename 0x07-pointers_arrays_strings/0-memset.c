#include "main.h"
/**
  * _memset - This function return character
  * @s:param1
  * @b:pram2
  * @n: param3
  * Return: return char
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

