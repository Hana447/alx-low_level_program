#include "main.h"
#include <string.h>
/**
  * _strcat - This function concatinate 2 string
  * Return: return character
  * @dest: this is first param
  * @src: this is second param
  */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i = 0;

	while (*ptr)
	{
		ptr++;
	}
	while (i < n && src[i] != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
		i++;
	}
	*ptr = '\0';
	return (dest);
}
