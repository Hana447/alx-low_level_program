#include "main.h"
#include <ctype.h>
/**
  * string_toupper -This function change the letter to uppercase
  * @c: param
  */
char *string_toupper(char *c)
{	
	char *ptr = c;
	int i;

	for (i = 0; *ptr; i++)
	{
		if (!isupper(ptr[i]))
			toupper(ptr[i]);
		ptr++;
	}
	*ptr = '\0';
	return (c);
}
