#include "main.h"
#include <ctype.h>
/**
  * string_toupper -This function change the letter to uppercase
  * @c: param
  * Return: return char
  */
char *string_toupper(char *c)
{

	while (*c)
	{
		if (*c >= 'a' && *c <= 'z')
		{
			*c = *c - 32;
		}
		c++;
	}
	*c = '\0';

	return (c);
}
