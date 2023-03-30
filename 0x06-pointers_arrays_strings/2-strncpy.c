#include "main.h"
#include <string.h>
/**
  * _strncpy - This function copy string
  * @dest: param
  * @src: param 2
  * @n: param 3
  * Return: return dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int ptr = (int) strlen(src);
	
	if (n >= ptr)
	{	 
		for (i = 0; i < ptr; i++)
			dest[i] = src[i];
		for (; i < n; i++)
			dest[i] = '\0';
	}
	else
	{
		for (i = 0; i < n; i++)
			dest[i] = src[i];
	}

	return (dest);
}
