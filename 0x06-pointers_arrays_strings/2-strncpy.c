#include "main.h"
/**
  * _strncpy - This function copy string
  * @dest: param
  * @src: param 2
  * @n: param 3
  * Return: return dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i;

	for (i = 0; i < n && *src; i++)
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	while (n < 10 && *ptr)
	{
		ptr++;
	}
	*ptr = '\0';
	return (dest);
}
