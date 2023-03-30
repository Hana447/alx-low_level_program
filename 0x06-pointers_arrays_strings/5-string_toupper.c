#include "main.h"
#include <ctype.h>
/**
  * string_toupper -This function change the letter to uppercase
  * @c: param
  * Return: return char
  */
char *string_toupper(char *c)
{
	char *ptr = c;

	while (*ptr)
	{
		if (islower(*ptr))
		{
			*ptr = toupper(*ptr);
		}
		ptr++;
	}
	return (c);
}
