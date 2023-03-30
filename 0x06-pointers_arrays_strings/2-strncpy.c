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
	int i = 0;
	int j = 0;

	while (i < n && *dest)
	{
		dest[i] = src[i];
		i++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
