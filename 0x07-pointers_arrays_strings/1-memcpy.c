#include "main.h"
/**
  * _memcpy - This function copy from src to dest
  * @dest: param1
  * @src: param 2
  * @n: param3
  * Return: return char
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *des = dest;
	char *sr = src;

	for (i = 0; i < n; i++)
	{
		*des++ = *sr++;
	}
		return (dest);
}
