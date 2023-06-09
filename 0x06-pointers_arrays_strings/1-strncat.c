#include "main.h"
#include <string.h>
/**
  * _strncat - This function concatinate 2 string
  * Return: return character
  * @dest: this is first param
  * @src: this is second param
  * @n: param 3
  */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i = 0;

	while (*ptr)
	{
		ptr++;
	}
	while (i < n && *src)
	{
		*ptr = *src;
		ptr++;
		src++;
		i++;
	}
	*ptr = '\0';
	return (dest);
}
